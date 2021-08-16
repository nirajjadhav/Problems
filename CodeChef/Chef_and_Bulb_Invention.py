
t = int(input())

for i in range(t):

    n, p, k = (int(i) for i in (input().split()))

    x = p % k
    y = (n-1) - (((n-1)//k) * k)
    ans = 0
    if(x > y):
        ans = (((n-1)//k) * x) + (y+1)
    else:
        ans = ((((n-1)//k)+1) * x)

    j = x
    while(j <= n-1):
        ans += 1
        if(j == p):
            print(ans)
            break
        j += k