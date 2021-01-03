

n = int(input())
s1_lists = []
s2_lists = []
for i in range(n):
    s = input()
    if "!" not in s:
        s1_lists.append(s)
    else:
        s2_lists.append(s[1: len(s)])            

if (len(set(s1_lists) & set(s2_lists)) == 0):
    print("satisfiable")
else:
    print((set(s1_lists) & set(s2_lists)).pop())
