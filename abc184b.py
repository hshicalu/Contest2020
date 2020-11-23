
n,x = map(int, input().split())
s = input()

for each in s:
    if each == "x":
        if x > 0:
            x -= 1
        else:
            x = 0
    if each == "o":
        x += 1

print(x)
