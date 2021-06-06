x,y = map(int, input().split())

def gcd(x,y):
    return gcd(y%x, x) if y%x else x

gcd_num = gcd(x,y)

print(x+y-gcd_num)
