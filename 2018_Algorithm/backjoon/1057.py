total, k , y = map(int,input().split())

count = 0

if total<k or total <y:
    count =-1
else:
    while k != y:
        k = k//2 + k%2
        y = y//2 + y%2
        count+=1
print(count)
