
def is_average_greater_than_c(a, b, c):
    average = (a + b) / 2
    return average > c


t = int(input())


for _ in range(t):
    
    a, b, c = map(int, input().split())

    
    if is_average_greater_than_c(a, b, c):
        print("YES")
    else:
        print("NO")
