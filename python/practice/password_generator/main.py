import random

password_strength = '???'
while password_strength != 'weak' and password_strength != 'normal' and password_strength != 'strong':
    password_strength = raw_input('How strong do you want your password to be (weak, normal, strong)? ')
    password_strength = password_strength.strip()
    password_strength = password_strength.lower()

if password_strength == 'weak':
    password_length = 4
if password_strength == 'normal':
    password_length = 8
if password_strength == 'strong':
    password_length = 16

invalid_values = list(range(58, 65))
for val in range(91, 97):
    invalid_values.append(val)

password = list()
for x in range(password_length):
    val = 58
    while val in invalid_values:
        val = random.randint(48, 123)

    password.append(str(unichr(val)))

print 'Your new password: ' + ''.join(password)
