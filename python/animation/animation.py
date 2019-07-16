import itertools
import threading
import time
import sys

done = False
def animate():
    global done
    for c in itertools.cycle(['|', '/', '-', '\\']):
        if done:
            break
        sys.stdout.write('\r' + c)
        sys.stdout.flush()
        time.sleep(0.2)  


def start():

    global done
    done = False
    print 'Starting Process...'
    t1 = threading.Thread(target=animate)
    t1.start()


def stop():

    global done
    done = True
    print
    print 'Done!' 
    print
