
s,p=map(int,input().split())
ans=list()
i=1
while i*i<=p:
	if p%i==0:
		ans.append([i, p//i])
		
	i+=1
m = len(ans)
exist = False
for j in range(m):
    if ans[j][0] + ans[j][1] == s:
        exist = True
        break

if exist:
    print("Yes")
else:
    print("No")
