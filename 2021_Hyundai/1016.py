import math

min, max = map(int, input().split())

#input_arr = [True for _ in range(max+1)]

cnt = 0
for i in range(2, max+1):
    for j in range(2, int(math.sqrt(max))+1):
        if i % (j*j) == 0:
            #input_arr[i] = False
            cnt+=1

#out_list = [i for i in range(min, max+1) if input_arr[i] == False]
#print(len([i for i in range(min, max+1) if input_arr[i] == False]))
print(cnt)
