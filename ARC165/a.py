def smallest_divisor(n):
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return i
    return n

T = int(input())

for _ in range(T):
    N = int(input())
    if N == 2:
        print("No")
        continue
    
    divisor = smallest_divisor(N)
    if divisor + 1 == N:
        print("Yes")
    else:
        print("No")
