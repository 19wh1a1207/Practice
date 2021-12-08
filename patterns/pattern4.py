n = 5

for i in range(n):
    p = i + 1
    for j in range(n - i):
        print(p, end = " ")
        p += 1
    print()
for i in range(n - 1):
    p = n - i - 1
    for j in range(i + 2):
        print(p, end = " ")
        p += 1
    print()