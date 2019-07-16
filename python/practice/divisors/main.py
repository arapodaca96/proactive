number = int(raw_input('Enter a number: '))

print 'List of divisors: '

for x in range(1, number + 1):
    if number % x == 0:
        print x
