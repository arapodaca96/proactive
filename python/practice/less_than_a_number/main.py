import random

print 'Creating list of 100 integers between 1 and 100...'

max_num = int(raw_input('Enter maximum number: '))

random_numbers = list()
for x in range(100):
    random_numbers.append(random.randint(1,101))

sorted_random_numbers = list()
for num in random_numbers:
    if num <= max_num:
        sorted_random_numbers.append(num)

sorted_random_numbers.sort()

print 'Numbers in list up to ' + str(max_num) + '...'
print sorted_random_numbers
