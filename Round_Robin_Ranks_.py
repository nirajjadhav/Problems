import math 
t = int(input())

for _ in range(t):
    n, k = map(int, input().split())

    ans = 0

    ans = 2 * (n - k)

    ans += 2 * (int((k - 1) / 2))

    print(int(ans))