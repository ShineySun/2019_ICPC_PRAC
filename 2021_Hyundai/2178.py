#def dfs(x,y):


N,M = map(int, input().split())

grid = []
ans = []
cnt = 0

visited = [[0 for _ in range(M)] for _ in range(N)]

for n in range(N):
    grid.append(list(map(int, input())))

dx, dy = [-1, 1, 0, 0] , [0, 0, -1, 1]

queue = [(0,0)]

visited[0][0] = 1

while queue:
    x,y = queue.pop(0)

    if x == N-1 and y == M-1:
        print(visited[x][y])
        break

    for i in range(4):
        nx = x + dx[i]
        ny = y + dy[i]

        if 0 <= nx < N and 0 <= ny < M:
            if visited[nx][ny] == 0 and grid[nx][ny] == 1:
                visited[nx][ny] = visited[x][y] + 1
                queue.append((nx, ny))
