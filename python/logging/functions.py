import logging
import datetime

logger = logging.getLogger('')

def add(x, y):
    logger.info('Adding {} and {}'.format(x, y))
    return x + y


def subtract(x, y):
    try:
        logger.info('Subtracting {1} from {0}'.format(x, y))
        return x - y
    except:
        logger.exception('Unable to subtract {1} from {0}'.format(x, y))


def multiply(x, y):
    logger.info('Multiplying {} and {}'.format(x, y))
    return x * y


def divide(x, y):
    try:
        logger.info('Dividing {} by {}'.format(x, y,))
        return x // y
    except:
        logger.exception('Attempted to divide by zero')
        
