name = raw_input('Enter your name: ')
name = name[0].upper() + name[1:]

target_age = int(raw_input('Enter your target age: '))
current_age = int(raw_input('Enter your current age: '))
years_to_target_age = target_age - current_age

current_year = 2019
final_year = current_year + years_to_target_age

print name + ', you will be ' + str(target_age) + ' years old in ' + str(years_to_target_age) + ' years (in ' + str(final_year) + ')!'

