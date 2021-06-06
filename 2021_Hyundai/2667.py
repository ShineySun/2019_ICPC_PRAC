
N = int(input())

grid = []
visited = []

for i in range(N):
    grid.append(list(map(int, input())))
    visited.append([0 for _ in range(N)])

dx, dy = [-1,1,0,0], [0,0,-1,1]

def dfs(x,y):

    visited[x][y] = 1

    if grid[x][y] == 1:
        answer[cnt-1] += 1

    for i in range(4):
        nx = x + dx[i]
        ny = y + dy[i]

        if 0 <= nx < N and 0 <= ny < N:
            if visited[nx][ny] == 0 and grid[nx][ny] == 1:
                dfs(nx,ny)





answer = []
cnt = 0

for x in range(N):
    for y in range(N):
        if grid[x][y] == 1 and visited[x][y] == 0:
            cnt+=1
            answer.append(0)
            dfs(x,y)

answer.sort()
print(cnt)
for i in range(len(answer)):
    print(answer[i])
