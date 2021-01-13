# 내리막 길
# 2021. 1. 13
# KMU FOSCAR ALGORITHM STUDY
# BACKJOON 1520
# DFS BASE

import sys

# recursion error
sys.setrecursionlimit(10**6)

# 세로 M 가로 N
M,N = map(int, sys.stdin.readline().split())

table = [list(map(int, input().split())) for _ in range(M)]

route_table = [list([-1]*N) for _ in range(M)]

# init start position
end_x = M-1
end_y = N-1

# Direction Vector
dir_vec = [(-1,0), (1,0), (0,-1), (0,1)]

# 시작점 체크
route_table[end_x][end_y] = 1

global_cnt = 0

def find_route(x,y):
    global table, route_table, dir_vec
    global end_x, end_y

    # 생각할거 - 메모리 초과 오류, 체크 배열 기준
    #print(x, ' ' ,y)
    if x == end_x and y == end_y:
        return 1

    if route_table[x][y] == 0:
        return route_table[x][y]

    if route_table[x][y] == -1:
        # 지나가는 부분 활성화
        route_table[x][y] = 0

        for dx,dy in dir_vec:
            if 0 <= x+dx <= end_x and 0 <= y+dy <= end_y:
                if table[x][y] > table[x+dx][y+dy]:
                    route_table[x][y] += find_route(x+dx, y+dy)

    return route_table[x][y]



print(find_route(0,0))

#print(route_table)
