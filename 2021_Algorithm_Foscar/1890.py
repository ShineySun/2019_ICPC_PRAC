# 점 프
# 2021. 1. 13
# KMU FOSCAR ALGORITHM STUDY
# BACKJOON 1890
# DFS BASE

import sys

sys.setrecursionlimit(10**6)

N = int(input())
table = [list(map(int, input().split())) for _ in range(N)]

route_table = [list([-1]*N) for _ in range(N)]

end_p = N-1

def find_route(x,y):
    global table, route_table, end_p

    if x == end_p and y == end_p:
        return 1

    if route_table[x][y] == -1:
        route_table[x][y] = 0

        jump_num = table[x][y]

        for i in range(2):
            if i == 0:
                if x+jump_num <= end_p:
                    route_table[x][y] += find_route(x+jump_num,y)
            else:
                if y+jump_num <= end_p:
                    route_table[x][y] += find_route(x,y+jump_num)
    return route_table[x][y]


print(find_route(0,0))

#
# print(table)
# print(route_table)
