import os

path = '.\\'

print 'original:   ' + path

path = os.path.abspath(path)

print 'abspath:    ' + path

path = path[27:]

print 'truncated:  ' + path

path = path.replace('\\', '/')

print 'converted:  ' + path

path = 'c/cygwin/' + path

print 'cygwin:     ' + path
