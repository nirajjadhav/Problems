
def solution():
    N, X = map(int, input().split())

    min_len = 2*X - 1

    if N < min_len:
        print(-1)
        return

    ans = ['a' for _ in range(N)]

    for i in range(1, X):
        ans[i-1] = chr(ord('a') + i)
        ans[N-i] = chr(ord('a') + i)

    print(''.join(ans))


T = int(input())
while(T > 0):
    T = T - 1
    solution()