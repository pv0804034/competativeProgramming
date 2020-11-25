import math

def fact(n):
    return math.factorial(n)

n = input()
n = int(n)

ans = 0
mod = 1000000007

for i in range(1,n):
    j = n-i
    ans += (fact(n) // (fact(i) * fact(j)))
    ans %= mod

print(ans)