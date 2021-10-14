
s = int(input())

for _ in range(s):
    n = int(input())

    h = list(map(int, input().split()))

    if(n % 2 == 0):
        print("no")
        continue

    start = 0
    end = n-1
    count = 1
    flag = False

    while(start <= end):

        if(h[start] != count or h[end] != count):
            flag = True
            break
        else:
            start += 1
            end -= 1
            count += 1
    
    if flag == False:
        print("yes")
    else:
        print("no")
