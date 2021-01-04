# 블랙잭
# 2021. 1. 4
# KMU FOSCAR ALGORITHM STUDY
# BACKJOON 2798

# get input
# 3 <= N <= 100
# 10 <= M <= 300,000
N,M = map(int, input().split())

num_list = list(map(int, input().split()))

sum_list = list()

for i in range(0,N-2):
    for j in range(i+1,N-1):
        for k in range(j+1, N):
            local_sum = num_list[i]+num_list[j]+num_list[k]

            if local_sum <= M:
                sum_list.append(local_sum)

print(max(sum_list))
