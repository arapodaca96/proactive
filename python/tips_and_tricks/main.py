import os
import tricks

tricks.usingEnumerate()
print tricks.swapNumbers(10, 20)
print tricks.reverseString('Alejandro')
print tricks.concatStrings('My', 'name', 'is', 'Alejandro')
print tricks
tricks.ternaryOperator(True)
tricks.ternaryOperator(False)


print
print

path = os.path.abspath('..\\test\\main.py')
print path

if os.path.exists(path):
    print 'path exists'
else:
    print 'path DNE'
