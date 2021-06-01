
t = int(input())

for _ in range(t):
    a,b,c,d,k = map(int,input().split())
    p1_parity = sum((a,b))
    p2_parity = sum((c,d))

    dist = abs(c-a)+abs(d-b)

    if(k<dist):
        print("NO")
    else:
        if((p1_parity%2 ==0 and p2_parity%2==0) or (p1_parity%2 !=0 and p2_parity%2 !=0)):
            if(k%2==0):
                print("YES")
            else:
                print("NO")
        else:
            if(k%2!=0):
                print("YES")
            else:
                print("NO")


