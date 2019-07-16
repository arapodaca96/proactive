import logging
import datetime
import functions

####################################

logger = logging.getLogger('')
logger.setLevel(logging.DEBUG)
logger._srcFile = None
logger.logThreads = 0
logger.logProcesses = 0

fh = logging.FileHandler('log\{}.log'.format(datetime.datetime.now().strftime('%Y%m%d_%H%M%S')))
fh.setLevel(logging.DEBUG)

ch = logging.StreamHandler()
ch.setLevel(logging.WARNING)

fh_formatter = logging.Formatter('%(asctime)s - %(filename)s:%(lineno)s [%(levelname)s] %(message)s')
fh.setFormatter(fh_formatter)
ch_formatter = logging.Formatter('%(filename)s:%(lineno)s [%(levelname)s] %(message)s')
ch.setFormatter(ch_formatter)

logger.addHandler(fh)
logger.addHandler(ch)

####################################

num1 = 40
num2 = 0
logger.debug('Assigned values num1={} and num2={}'.format(num1, num2))

print(functions.add(num1, num2))
print(functions.subtract('error', num2))
print(functions.multiply(num1, num2))
print(functions.divide(num1, num2))

logger.debug('End of main.py')
