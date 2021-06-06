from collections import deque
import sys

sys.setrecursionlimit(10000)

N, M = map(int, input().split())

grid = []

for n in range(N):
    grid.append(list(map(int, input().split())))

def isCheck():
    for i in range(N):
        for j in range(M):
            if grid[i][j] == 1:
                return True
    return False

def getCheese():
    result = 0
    for i in range(N):
        for j in range(M):
            if grid[i][j] == 1:
                result += 1
    return result

dx = [1,-1,0,0]
dy = [0,0,1,-1]

def dfs(x,y):

    visited[x][y] = True

    if grid[x][y] == 1:
        return
    grid[x][y] = 2

    for k in range(4):
        nx = x + dx[k]
        ny = y + dy[k]

        if 0 <= nx < N and 0 <= ny < M:
            if visited[nx][ny] == 0:
                dfs(nx, ny)

result = 0
cnt = 0

while True:
    if not isCheck():
        break

    result += 1
    cnt = getCheese()

    visited = [[False]*M for _ in range(N)]

    dfs(0,0)

    for x in range(N):
        for y in range(M):
            if grid[x][y] == 1:
                check = False

                for nk in range(4):
                    nx = x + dx[nk]
                    ny = y + dy[nk]

                    if 0<=nx<N and 0<=ny<M:
                        if grid[nx][ny] == 2:
                            check = True
                            break
                if check:
                    grid[x][y] = 0
print(result)
print(cnt)
