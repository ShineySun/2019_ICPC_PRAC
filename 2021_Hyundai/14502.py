from collections import deque

N,M = map(int, input().split())

grid = []

for n in range(N):
    grid.append(list(map(int, input().split())))

max_num = 0

dx = [-1,1,0,0]
dy = [0,0,-1,1]
