n = 5
for i in range(n):
    for j in range(2 * n - 1):
        if(j == (n - i - 1) or j == (n + i - 1)):
            print("*", end = " ")
        else:
            print(" ", end = " ")
    print()
for i in range(1, n):
    for j in range(2 * n - 2):
        if(j == i or j == (2*n - 2) - i):
            print("*", end = " ")
        else:
            print(" ", end = " ")
    print()