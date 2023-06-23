def modpow(a, n):
    res = 1
    while n > 0:
        if n & 1:
            res = res * a
        a = a * a
        n >>= 1
    return res

N = 64
a = list(map(int, input().split()))

ans = 0
for i in range(N):
    ans += a[i] * modpow(2, i)

print(ans)
