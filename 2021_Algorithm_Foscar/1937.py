# 욕심쟁이 판다
# 2021. 1. 13
# KMU FOSCAR ALGORITHM STUDY
# BACKJOON 1937
# DFS BASE DP?
# TO HARD NOW

import sys

# recursion error
sys.setrecursionlimit(10**6)

N = int(input())

table = [list(map(int, input().split())) for _ in range(N)]

route_table = [list([-1]*N) for _ in range(N)]

dir_vec = [(-1,0), (1,0), (0,-1), (0,1)]

def find_route(x,y):
    global table, route_table, dir_vec, N
    # 굳이 필요 없음.
    if route_table[x][y] == 0:
        return route_table[x][y]

    if route_table[x][y] == -1:
        route_table[x][y] = 0

        for dx,dy in dir_vec:
            if 0 <= x+dx < N and 0 <= y+dy < N and table[x][y] < table[x+dx][y+dy]:
                # 끝에 1 더하는거 생각..
                route_table[x][y] = max(route_table[x][y], find_route(x+dx, y+dy)+1)

    return route_table[x][y]

for i in range(N):
    for j in range(N):
        route_table[i][j] = find_route(i,j)

# route table flatten and select max
print(max(sum(route_table, []))+1)
