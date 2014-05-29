def is_prime(num):
    if num == 2:
        return True
    elif num % 2 == 0:
        return False
    else:
        i = 3;
        while i <= (num ** 0.5):
            if num % i == 0:
                return False
            i += 2
    return True

def find_prime_factors(n):
    factors = []
    i = 2
    while i <= (n / 2):
        if is_prime(i) and n % i == 0:
            factors.append(i)
        i += 1
    return factors


assert(is_prime(9) == False)
assert(find_prime_factors(9) == [3])

assert(is_prime(2) == True)
assert(find_prime_factors(2) == [])

assert(is_prime(7) == True)
assert(find_prime_factors(7) == [])

assert(is_prime(144) == False)
assert(find_prime_factors(144) == [2,3])

assert(is_prime(15649) == True)
assert(find_prime_factors(15649) == [])

assert(is_prime(104729) == True)
assert(find_prime_factors(104729) == [])

assert(is_prime(20751) == False)
assert(find_prime_factors(20751) == [3,6917])