
a,b,x,y = map(int,input().split())

c = b - a

if c == 0:
    dist = x
elif c > 0:
    dist_list = []
    for i in range(1,c+2):
        dist_list.append((2*i-1) * x + (c+1-i)*y)
    dist = min(dist_list)
else:
    dist_list = []
    c = abs(c)
    for i in range(1,c+1):
        dist_list.append((2*i-1) * x +(c-i)*y)
    dist = min(dist_list)


print(dist)
