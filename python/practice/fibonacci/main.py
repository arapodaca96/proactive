def fibonacci(num):
    print '1: 0'
    if num == 0:
        return

    prev_ = 0
    curr_ = 1
    next_ = -1

    for x in range(1, num):
        print str(x+1) + ': ' + str(curr_)

        next_ = curr_ + prev_
        prev_ = curr_
        curr_ = next_


#**************************

user_num = int(raw_input('Enter the number of Fibonacci numbers you want: '))

fibonacci(user_num)
