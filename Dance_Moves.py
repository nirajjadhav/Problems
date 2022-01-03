import math 
t = int(input())

for _ in range(t):
    a, b = map(int, input().split())

    if(b > a):
        diff = b - a
        if(diff % 2 == 0):
            steps = diff // 2
        else:
            steps = math.ceil(diff / 2) + 1
    elif(a > b):
        steps = a - b
    else:
        steps = 0

    print(steps)  
