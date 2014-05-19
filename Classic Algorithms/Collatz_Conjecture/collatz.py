"""
Collatz Conjecture:
    Start with a number n > 1. Find the number of steps it takes to
    reach one using the following process:
    If n is even, divide it by 2. If n is odd, multiply it by 3 and add 1
"""

try:
    n = int(input("Enter a number greater than one: "))
    if n <= 1:
        print("Invalid input")
        exit(0)
except ValueError:
    print("Invalid input")
    exit(0)

count = 0
while n != 1:
    print(n)
    if n % 2 == 0:
        n //= 2
        count += 1
    elif n % 2 > 0:
        n *= 3
        n += 1
        count += 1

print(n)
print("\nSteps taken: {}".format(count))