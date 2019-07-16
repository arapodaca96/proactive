import subprocess

in_file = 'C:\\Users\\alejandro.apodaca\\Desktop\\batch\\startup\\startup.cmd1'

######################### FUNCTIONS #########################

def remove_delays():

    global in_file

    after_ramix_line = False
    before_spawn_line = True

    contents = list()
    with open(in_file, 'r') as f:
        contents = f.readlines()

    i = 0
    length = len(contents)
    while (i < length):
        if 'Ramix vs. Reflective Memory' in contents[i]:
            after_ramix_line = True
            print 'found ramix on line {}'.format(i+1)
        if 'Spawn each task' in contents[i]:
            before_spawn_line = False
            print 'found spawn on line {}'.format(i+1)
        if (after_ramix_line == True) and (before_spawn_line == True) and ('taskDelay' in contents[i]):
            contents.pop(i)
            print 'removing a task delay from line {}...'.format(i+1)
            print 'line {}'.format(i+1)
            length = length - 1
            print 'length = {}'.format(length)
            i = i - 1
        i = i + 1
        print 'i = {}'.format(i)

    with open(in_file, 'w') as f:
        for line in contents:
            f.write(line)


def add_delay(delay):

    global in_file

    remove_delays()

    contents = list()
    with open(in_file, 'r') as f:
        contents = f.readlines()

    i = 0
    for i in range(0, len(contents) - 1):
        if 'Ramix vs. Reflective Memory' in contents[i]:
            break
    
    contents.insert(i + 2, 'taskDelay({})\n'.format(delay))

    with open(in_file, 'w') as f:
        for line in contents:
            f.write(line)
        

######################### MAIN #########################

subprocess.call('cls', shell=True)

while True:
 
    print '*** WARNING: Do not manually alter startup.cmd1 or this script may not work properly! ***'
    print '=============================='
    print 'Options'
    print '=============================='
    print
    print '[0] Remove taskDelay()'
    print '[1] Insert taskDelay()'
    print
    print '=============================='
    option = 1
    option = raw_input('Enter option number (default = 1): ')

    if option == '0':
        print 'Removing taskDelay() calls...'
        remove_delays()
        print 'Done.'
        break

    elif (option == '1') or (option == '') or (option == ' '):
        while True:
            print
            try:
                delay = int(raw_input('Enter delay size (1 - 1000 ms): '))

                if (delay > 0) and (delay < 1001):
                    print
                    print 'inserting taskDelay({})...'.format(delay)
                    add_delay(delay)
                    print 'Done.'
                    break
                else:
                    pass

            except:
                pass
        break

    else:
        subprocess.call('cls', shell=True)

raw_input('Press ENTER to continue')
