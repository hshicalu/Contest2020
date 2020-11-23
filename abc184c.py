
r1, c1 = map(int,input().split())
r2, c2 = map(int,input().split())

r = r1 - r2
c = c2 - c1

if r1 == r2 and c1 == c2:
    print(0)
    exit()
elif (r1+c1 == r2+c2) or (r1-c1 == r2-c2) or (abs(r1-r2)+abs(c1-c2)<=3):
    print(1)
    exit()
elif (r ^ c ^ 1) & 1:
    print(2)
    exit()
elif abs(r) + abs(c) <= 6:
    print(2)
    exit()
elif abs(r+c) <= 3 or abs(r-c) <= 3:
    print(2)
    exit()
else:
    print(3)



