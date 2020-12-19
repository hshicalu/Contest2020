

n,m,t = map(int,input().split())

ab = [0]
for i in range(m):
    a,b = map(int,input().split())
    ab.append(a)
    ab.append(b)
ab.append(t)

exist = True
ch = n
for i in range(1,len(ab)):
    if i % 2 != 0:
        ch -= ab[i]- ab[i-1]
        if ch <= 0:
            exist = False
    else:
        if ch < n:
            ch += ab[i] - ab[i-1]
            if ch >= n:
                ch = n        

        else:
            continue

if exist:
    print("Yes")
else:
    print("No")
