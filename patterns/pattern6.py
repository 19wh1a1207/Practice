n = 5
for i in range(n):
    for j in range(i):
        print(" ", end = " ")
    for j in range(i, 2*n-i - 1):
        print("*", end = " ")
    print()

for i in range(n):
    for j in range(i):
        print(" ", end="")
    for j in range(i, 2*n-i - 1, 2):
        print("* ", end="")
    print()