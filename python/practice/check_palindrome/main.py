string = raw_input('Enter anything: ')
string = string.replace(' ', '')
string = string.lower()

if string == string[::-1]:
    print 'This is a palindrome.'
else:
    print 'This is NOT a palindrome.'
