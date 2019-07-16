import shutil
import os

def rmdir(path):
    try:
        shutil.rmtree(path)
        print 'removed ' + path
    except:
        print 'error removing ' + path 
