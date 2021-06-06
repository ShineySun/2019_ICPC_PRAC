from collections import deque

M,N = map(int, input().split())

grid = []
#visited = []

for i in range(N):
    grid.append(list(map(int, input().split())))
    #visited.append([0 for _ in range(M)])

dx, dy = [-1,1,0,0], [0,0,-1,1]
queue = deque()

def bfs():
    while queue:
        x,y = queue.popleft()

        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]

            if 0 <= nx < N and 0 <= ny < M and grid[nx][ny] == 0:
                grid[nx][ny] = grid[x][y] + 1
                queue.append((nx,ny))


for i in range(N):
    for j in range(M):
        if grid[i][j] == 1:
            queue.append((i,j))

bfs()

result = -2
flag = False

for i in grid:
    for j in i:
        if j == 0:
            flag = True
        result = max(j, result)

if flag == True:
    print(-1)
elif result == -1:
    print(0)
else:
    print(result-1)
