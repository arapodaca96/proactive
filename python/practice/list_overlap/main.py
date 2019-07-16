import random

list1 = list()
list2 = list()
list_common = list()

for x in range(10):
    list1.append(random.randint(1, 101))

for x in range(10):
    list2.append(random.randint(1, 101))    

print 'List 1:'
print list1
print
print 'List 2:'
print list2
print

for x in list1:
    if x in list2:
        if x not in list_common:
            list_common.append(x)

if not list_common:
    print 'Nothing in common.'
else:
    print 'Common:'
    print list_common
