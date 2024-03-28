
def is_greater_than_50_percent(x, y, z):
    total_students = x * y
    return z > (total_students // 2)


T = int(input())


for _ in range(T):
 
    X, Y, Z = map(int, input().split())
    

    if is_greater_than_50_percent(X, Y, Z):
        print("YES")
    else:
        print("NO")
