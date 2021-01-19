# 스타트와 링크
# 2021. 1. 19
# KMU FOSCAR ALGORITHM STUDY
# BACKJOON 14889
#https://github.com/ShineySun/Algorithm_KMU
# Combination & Brute Force
# 시간 초과

# 4 <= N 은 짝수 <= 20
from itertools import combinations
import sys

N = int(input())

# team_names
team_names = list(range(N))

#print(team_names)

# team_board
team_board = [list(map(int, input().split())) for _ in range(N)]

# combination
combinations_team = combinations(range(N), N//2)

# print(len(list(combinations_team)))
# print(len(list(set(combinations_team))))

#print(list(combinations_team))
ans = float('inf')

for tmp_team in combinations_team:
    #print(list(tmp_team))
    team_start = list(set(tmp_team))
    #print("team_start : {}".format(team_start))
    team_link = [x for x in team_names if x not in team_start]
    #print("team_link : {}".format(team_link))

    team_start_score = 0
    team_link_score = 0

    for idx_1 in range(0, N//2-1):
        for idx_2 in range(idx_1+1, N//2):
            team_start_score += team_board[team_start[idx_1]][team_start[idx_2]] + team_board[team_start[idx_2]][team_start[idx_1]]

            team_link_score += team_board[team_link[idx_1]][team_link[idx_2]] + team_board[team_link[idx_2]][team_link[idx_1]]

    diff = abs(team_link_score - team_start_score)

    if diff < ans:
        ans = diff

print(ans)
