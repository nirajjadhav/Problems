import math
t = int(input())

for _ in range(t):
    age_groups_list = ['#']
    age_groups_list.extend(list(map(int, input().split())))
    G = age_groups_list.pop(1)
    P = age_groups_list.pop(1)
    #print(age_groups_list," ",G, " ", P)

    total_persons = sum(age_groups_list[G+1:])
    #print(total_persons)
    
    min_days = math.ceil((total_persons+1) / P)
    max_days = math.ceil((total_persons+age_groups_list[G]) / P)

    print(min_days, max_days)

