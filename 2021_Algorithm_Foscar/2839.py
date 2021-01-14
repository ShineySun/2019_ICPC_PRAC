# 설탕 배달
# 2021. 1. 14
# KMU FOSCAR ALGORITHM STUDY
# BACKJOON 2839
#https://github.com/ShineySun/Algorithm_KMU

# 3 <= N < 5000
N = int(input())

ans = []

for i in range(N//5+1):
    for j in range(N//3+1):
        if i*5 + j*3 == N: ans.append(i+j)

if len(ans):
    print(min(ans))
else:
    print(-1)
