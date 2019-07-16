import random

def remove_duplicates(list_):
    return list(dict.fromkeys(list_))


#**********************************

size = 10
list_ = list()

for x in range(size):
    list_.append(random.randint(1, 101))

print 'Old list:'
print list_

list_ = remove_duplicates(list_)

print '\nNew list:'
print list_
