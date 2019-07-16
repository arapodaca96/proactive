primes = list()
prime_factorization = list()
number = int(raw_input('Enter a number: '))

for num in range(2, number/2):
    isPrime = True
    for n in range(2, num/2):
        if num % n == 0:
            isPrime = False
            break
    if isPrime:
        primes.append(num)

for prime in primes:
    while number % prime == 0:
        number = number/prime
        prime_factorization.append(prime)

print prime_factorization
