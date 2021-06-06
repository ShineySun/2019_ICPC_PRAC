N = int(input())

def lcm(a,b):
    d = gcd(a,b)
    #print(d)
    return d* (a//d) * (b // d)

def gcd(a,b):
    return gcd(b%a, a) if b%a else a

for n in range(N):
    a,b = map(int, input().split())
    print(lcm(a,b))
