import os

def remove(path):
    try:
        if os.path.exists(path):
            os.remove(path)
            print path + ' removed!'
    except:
        print 'unable to remove ' + path
