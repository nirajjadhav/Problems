


def longestSubstring(my_str):
    n = len(my_str)
    res = 0
    i = 0
    prev = [-1] * 256

    for j in range(0, n):
        i = max(i, prev[ord(my_str[j])]+1);
        maxEnd = j-i+1;
        res = max(res, maxEnd);
        prev[ord(my_str[j])] = j;

    return res;



if __name__ == '__main__':
    my_str = input()
    print(longestSubstring(my_str))