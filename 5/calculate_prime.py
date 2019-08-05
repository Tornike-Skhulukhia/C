

# few lines of code that calculates if number is
# prime and prints if it is
import time

NUMBER = 104729

print(f"Hi, I will tell you if the number {NUMBER} is prime");

t_1 = time.time()
# just repeat same process 100 times
# for i in range(1000000)
for j in range(1000000):
    answer = 1  # assume it is prime
    
    for i in range(2, int(NUMBER ** 0.5)):
        if NUMBER % i == 0:
            answer = 0  # it is not prime
            break

diff = round(time.time() - t_1, 4)
print("\nMy CPU calculated that answer is: "
        f'{"It is prime" if (answer == 1) else "It is not prime"}')

print(f"Time required: {diff} seconds")