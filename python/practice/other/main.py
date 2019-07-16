import sys
import datetime
import calendar

PI = 3.14159

def get_system_version():
    return sys.version


def get_time():
    return datetime.datetime.now()


def area_of_circle(rad):
    return PI * (rad**2)


def reverse_name_order():
    full_name = raw_input('Enter your first and last name: ')
    names = full_name.split()
    names[-1] = names[-1] + ','
    print ' '.join(names[::-1])


def generate_list_and_tuple(*args):
    list_ = list()
    for arg in args:
        list_.append(arg)
    print list_
    tuple_ = tuple(list_)
    print tuple_


def get_file_extension(filename):
    ext_start = filename.rfind('.') + 1
    print filename[ext_start::]
    

def print_first_and_last(list_):
    print 'first: ' + str(list_[0])
    print 'last:  ' + str(list_[-1])


def print_exam_schedule(*args):
    print 'The exam will start on: '
    new_date = list()
    for i in range(len(args) - 1):
        new_date.append(str(args[i]) + ' / ')
    new_date.append(str(args[-1]))
    print ''.join(new_date)


def add_n_nn_nnn(num):
    n = str(num)
    nn = n + n
    nnn = n + n + n
    return int(n) + int(nn) + int(nnn)


def help_for(str):
    exec('print ' + str + '.__doc__')


def print_calendar(year):
    calendar.prcal(year)


def print_without_escaping():
    print   """a string that you "don't" have to escape
This
is a ....... multi-line
heredoc string --------> example"""


def days_between_dates(date1, date2):    
    d1 = datetime.date(date1[0], date1[1], date1[2])
    d2 = datetime.date(date2[0], date2[1], date2[2])
    print str((d2-d1).days) + ' days'

    
def volume_of_sphere(rad):
    return (4.0/3.0) * PI * (rad**3)


def double_the_abs_diff(num):
    if num <= 17:
        return 17 - num
    else:
        return 2 * (num - 17)


def check_within_range(num):
    within_range = False
    if abs(2000 - num) < 100:
        return True
    if abs(1000 - num) < 100:
        return True
    return False


def triple_sum(n1, n2, n3):
    if n1 == n2 == n3:
        return 3 * (3 * n1)
    else:
        return n1 + n2 + n3


def insert_Is(string):
    if string.startswith('Is'):
        return string
    else:
        return 'Is' + string


def multiply_string(string, n):
    return string * n


def even_or_odd(num):
    if num % 2 == 0:
        return 'even'
    else:
        return 'odd'


def _4th_element(*args):
    if len(args) < 4:
        return 'Invalid'
    else:
        return args[3]


def n_copies_of_first_2_in_string(string, n):
    if len(string) < 2:
        return string * n
    else:
        return string[0:2] * n


def is_vowel(c):
    if c in ['a', 'e', 'i', 'o', 'u']:
        return True
    else:
        return False


def create_horizontal_histogram(x, y):
    for index, elem in enumerate(x):
        print str(elem) + ' |',
        print '*' * y[index]


def area_of_triangle(b, h):
    return (1.0 / 2.0) * b * h


def GCD(a, b):
    if a == b:
        return a
    if a > b:
        return GCD(a - b, b)
    if a < b:
        return GCD(a, b - a)


def LCM(a, b):
    return a * b / GCD(a, b)


def interest_growth(principal, interest, years):
    return principal * (((interest / 100.0) + 1) ** years)


def distance_between_two_points(p1, p2):
    return (((abs(p2[0] - p1[0])) ** 2) + ((abs(p2[1] - p1[1])) ** 2)) ** (0.5)


#------------------------------------------------ MAIN

print get_system_version()
print get_time()
print area_of_circle(1.1)
reverse_name_order()
generate_list_and_tuple(1, 2, 3)
get_file_extension('main.py')
print_first_and_last(['red', 'green', 'white', 'black'])
print_exam_schedule(07, 12, 2019)
print add_n_nn_nnn(5)
help_for('range')
print_calendar(2018)
print_without_escaping()
days_between_dates((2014, 7, 2), (2019, 7, 12))
print volume_of_sphere(6)
print double_the_abs_diff(20)
print check_within_range(1999)
print triple_sum(4, 4, 4)
print insert_Is('Is alejandro')
print multiply_string('alex ', 3)
print even_or_odd(0)
print _4th_element(1, 2, 3, 4, 5, 6, 7, 8, 9, 0)
print n_copies_of_first_2_in_string('alejandro', 5)
print is_vowel('a')
create_horizontal_histogram([1, 2, 3], [2, 5, 3])
print area_of_triangle(2, 3)
print GCD(60, 144)
print LCM(60, 144)
print interest_growth(14000, 2.57, 13)
print distance_between_two_points((0, 0), (1, 1))

