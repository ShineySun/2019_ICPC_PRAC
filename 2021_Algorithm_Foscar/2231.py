# 분해합
# 2021. 1. 4
# KMU FOSCAR ALGORITHM STUDY
# BACKJOON 2231

# get input
N = int(input())

# 몇자리수인지 판단
# 살짝 야매 코딩
num_digits = len(str(N))

# N - 자리수*9 ~ N 까지 탐색
for candidate in range(N-num_digits*9, N+1):
    if candidate < 0:
        continue

    str_candidate = str(candidate)

    # candidate 미리 저장
    local_sum = candidate

    # 각 자리수 local_sum 에 더함
    for i in str_candidate:
        local_sum = local_sum + int(i)

    # local_sum == N 일때 return
    if local_sum == N:
        print(candidate)
        break
    if candidate == N:
        print(0)
