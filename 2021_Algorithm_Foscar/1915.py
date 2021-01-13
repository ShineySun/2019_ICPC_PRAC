# 가장 큰 정사각형
# 2021. 1. 13
# KMU FOSCAR ALGORITHM STUDY
# BACKJOON 1915
# DP Version

N,M = map(int, input().split())
table = [list(map(int, list(input().rstrip()))) for _ in range(N)]

def check_square(table,N,M):
    for y in range(1,N):
        for x in range(1,M):
            if table[y][x] == 1:
                table[y][x] += min(table[y-1][x], table[y-1][x-1], table[y][x-1])
    max_len = max(sum(table, []))
    print(max_len**2)

check_square(table, N, M)
