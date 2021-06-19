
def print_rangoli(n):
    # your code goes here
    rows = n-1

    u = (n-1)*2

    a = ['#', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p','q', 'r', 's', 't', 'u', 'v', 'w','x', 'y', 'z']

    d = a[n]
    back_list = []
    if(n > 1):

        for _ in range(n):
            print('-'*u + d + '-'*u)
            back_list.append('-'*u + d + '-'*u)
            n -= 1
            mid = len(d)//2
            #print(mid)
            d = d[:mid+1] + '-' + a[n] + '-' + d[mid:]
            #print(d)
            u -= 2

        for i in back_list[len(back_list)-2::-1]:
            print(i)
    else:
        print('a')


if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)