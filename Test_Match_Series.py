t = int(input())

for _ in range(t):
    a = list(map(int, input().split()))

    ind_count = a.count(1)
    eng_count = a.count(2)

    if ind_count > eng_count:
        print("INDIA")
    elif eng_count > ind_count:
        print("ENGLAND")
    else:
        print("DRAW")