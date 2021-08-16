
t = int(input())

for i in range(t):

    n, m, x = (int(i) for i in (input().split()))

    aList = (int(i) for i in (input().split()))

    #print(sorted(list(enumerate(aList)), key = lambda x: x[1]))
    aList = list(enumerate(aList))
    res = []
    #print("aList= ", aList)
    bList = aList.copy()
    for i in bList:
        if(i[1] >= m):
            res.append(i[0]+1)
            aList.remove(i)
            #print("bList= ", bList)

    #print("aList= ", aList)
    if(x > len(res)):
        x = x - len(res)
        aList = sorted(aList, key = lambda x: x[1], reverse= True)
        #print("x = ", x)
        #print("aList= ", aList)
        for i in range(x):
            res.append(aList[i][0]+1)

    res = sorted(res)
    print(len(res), *res)



