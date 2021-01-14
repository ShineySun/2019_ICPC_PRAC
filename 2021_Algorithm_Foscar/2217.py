# 로프
# 2021. 1. 14
# KMU FOSCAR ALGORITHM STUDY
# BACKJOON 2839
# https://github.com/ShineySun/Algorithm_KMU

N = int(input())

ropes = [int(input()) for _ in range(N)]
ropes.sort(reverse=True)

weights = []

for i in range(N):
    weights.append(ropes[i]*(i+1))

print(max(weights))
