sentence = raw_input('Enter a sentence: ')

words = sentence.split()

print ' '.join(words[::-1])
