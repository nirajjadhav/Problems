import math 
t = int(input())

for _ in range(t):
    a, b = map(int, input().split())

    min_val = a * 2
    max_val = (a * b) * ((a * b) - 1)

    print(min_val, max_val)