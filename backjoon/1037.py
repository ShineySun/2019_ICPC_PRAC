x,y = map(int,input().split())

def rev(a):
    sol = 0
    while(a):
        sol *= 10
        sol += a%10
        a //= 10
    return sol

n = rev(x) + rev(y)
k = rev(n)
print(k)
