import math
A,B,C = map(int,input().split())

pro = 0
for i in range(1,A+1):
    for j in range(1,B+1):
        for k in range(1,C+1):
            pro += (((i %998244353) * (j % 998244353)) % 998244353) * (k % 998244353)

print(pro % 998244353)
