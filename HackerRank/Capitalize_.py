s = input()

n = list(s)
#print(n)
for i in range(len(n)):

    if(i == 0):
        if n[i].isalpha():
            n[i] = n[i].upper()
            continue
    
    if(n[i-1].isspace()):
       n[i] =  n[i].upper()
    


print(''.join(n))

