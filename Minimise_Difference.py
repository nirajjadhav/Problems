t = int(input())

for _ in range(t):
    n, m = map(int, input().split())

    edge_list = []
    for _ in range(m):
        a, b = map(int, input().split())
        edge_list.append((a,b))
    
    d = dict.fromkeys(range(1,n+1), [0,0])

    
    for edge in edge_list:
        d[edge[0]][0] += 1
        d[edge[1]][0] += 1

        if edge[0] > edge[1]:
            d[edge[0]][1] += 1
        elif edge[1] > edge[0]:
            d[edge[1]][1] += 1

    print(d)
    
    #new_list = sorted(d.items(), key=lambda x: x[1], reverse=True)

    #print(new_list)
    

    #print(d)
    
    #print(max(d.values()) - min(d.values()))
    #print(*d.keys())



