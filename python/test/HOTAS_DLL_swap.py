'''
1. Ask user which HOTAS stations they want to update
2. Ask user which version they want to update selected stations to
3. Copy files from backup release folder to selected H00X folders
'''

import os
import shutil
import subprocess
import time

##******************************************************************************
# Declare available HOTAS stations and versions

all_HOTAS_stations = {  '1': 'H001',
                        '2': 'H002',
                        '3': 'H003',
                        '4': 'H004',
                        '6': 'H006',
                        '7': 'H007',
                        '9': 'H009',
                        }
all_versions = {        '1': ('Release 8.7', 'C:\\vrsg\\backup\\Release_8.7'),
                        '2': ('Release 9.0', 'C:\\vrsg\\backup\\Release_9.0')
                        }

##******************************************************************************
# List all available HOTAS stations for user

print '=============================='
print 'Available HOTAS stations: '
print '=============================='
for key in sorted(all_HOTAS_stations):
    print ' [' + key + '] ' + all_HOTAS_stations[key]
print

##******************************************************************************
# Ask user which stations they want to update and create a sorted list of H00X
# stations

print 'Enter HOTAS stations you wish to update, separated by spaces'
HOTAS_list_raw = raw_input('(e.g. 1 9 3 --> H001, H009, and H003): ')

if HOTAS_list_raw == 'all':
    HOTAS_list = all_HOTAS_stations.values()
else:
    HOTAS_list_raw = HOTAS_list_raw.split()
    HOTAS_list = list()
    for HOTAS in HOTAS_list_raw:
        HOTAS_list.append('H00' + HOTAS)

HOTAS_list.sort()
print HOTAS_list
print

for HOTAS in HOTAS_list:
    if HOTAS not in all_HOTAS_stations.values():
        print 'Warning: ' + HOTAS + ' is not a valid station.'
print 

##******************************************************************************
# List all available versions for user

print '**----------------------------------------------------------------------**'
print '*   [WARNING] Before continuing, make sure selected HOTAS stations are   *'
print '*             completely powered off to avoid file lockup!               *'
print '**----------------------------------------------------------------------**'
print 
print '=============================='
print 'Available versions: '
print '=============================='
for key in sorted(all_versions):
    print ' [' + key + '] ' + all_versions[key][0]
print

##******************************************************************************
# Ask user which version they want to change to 

version = raw_input('Select version from list above (e.g. 2 for Release 9.0): ')
if version not in all_versions.keys():
    print 'Error: invalid version.'
else:
    print '-> ' + all_versions[version][0]
print
start_time = time.time()

##******************************************************************************
# Kill VRSG processes for selected HOTAS stations

# TODO: add this step once you know what the commands are

##******************************************************************************
# Find all directories for selected HOTAS stations and copy files from
# appropriate backup release folder into all the HOTAS plugins folders

# Create list of directories inside of backup release folder
backup_folder = all_versions[version][1]
backup_release_folders = list()
for item in os.listdir(backup_folder):
    item_path = os.path.join(backup_folder, item)
    if not os.path.isfile(item_path):
        backup_release_folders.append(item)

# Find all FOLDERS in VRSG directory that have 'Plugins', 'H00X', and 'OTW',
# 'sensor1', or 'sensor2' in their directory names, and perform robocopy from
# backup folder into correct VRSG folder
VRSG_folder = 'C:\\vrsg'
for HOTAS in HOTAS_list:
    for release_folder in backup_release_folders:
        for item in os.listdir(VRSG_folder):
            item_path = os.path.join(VRSG_folder, item)
            if (HOTAS in item) and (release_folder in item) and ('Plugins' in item) and (not os.path.isfile(item_path)):
                subprocess.call('robocopy ' + os.path.join(backup_folder, release_folder) + ' ' + item_path + ' /MIR /COPY:DAT /DCOPY:T /NFL /NDL /NJS /NJH /NS /NC', shell=True)

elapsed_time = time.time() - start_time
print '\n\tDone. (Elapsed time: {0:.3f} sec)\n'.format(elapsed_time)
