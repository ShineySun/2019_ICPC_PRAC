# 통나무 건너뛰기
# 2021. 1. 15
# KMU FOSCAR ALGORITHM STUDY
# BACKJOON 11497
# https://github.com/ShineySun/Algorithm_KMU


# T input
T = int(input())

# 그리디
# ㅁ max ㅁ 가운데 큰 값이 들어가야하며, 이는 인덱스 2차이
for t in range(T):
    # N input
    # 5 <= N <= 10,000
    N = int(input())

    woods = list(map(int, input().split()))

    # 정렬
    woods.sort()

    max_val = 0

    for i in range(0, N-2):
        diff = woods[i+2] - woods[i]
        max_val = max(max_val, diff)

    print(max_val)


# 1. 완전 탐색 - permutations
# 1. 메모리 초과 에러

#from itertools import permutations
# for t in range(T):
#     # N input
#     # 5 <= N <= 10,000
#     N = int(input())
#
#     woods = list(map(int, input().split()))
#
#     #print(woods)
#
#     total_list = []
#
#     for per_list in list(set(permutations(woods))):
#         total = 0
#
#         total = abs(per_list[0] - per_list[-1])
#
#         for i in range(len(per_list)-1):
#             total = max(total, abs(per_list[i] - per_list[i+1]))
#
#         total_list.append(total)
#
#     print(min(total_list))

    #
