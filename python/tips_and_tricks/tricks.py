def usingEnumerate():
    subjects = ('python', 'coding', 'tips')
    for i, subject in enumerate(subjects):
        print i, subject


def swapNumbers(x, y):
    return y, x


def reverseString(str):
    return str[::-1]


def concatStrings(*str):
    return ' '.join(str)


def ternaryOperator(val):
    if (val == True):
        str = 'Tru doe'
    else:
        str = 'Nah fam'
    print str
