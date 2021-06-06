from collections import deque

T = int(input())

dx = [2,-2,2,-2,1,-1,-1,1]
dy = [1,-1,-1,1,2,-2,2,-2]

for t in range(T):
    I = int(input())

    st_x, st_y = map(int, input().split())
    en_x, en_y = map(int, input().split())

    grid = [[0]*I for _ in range(I)]
    #visited = [[0]*I for _ in range(I)]

    grid[st_x][st_y] = 1
    #grid[en_x][en_y] = -1

    queue = deque([[st_x, st_y]])
    #visited[st_x][st_y] = 0

    while queue:
        x,y = queue.popleft()

        if x == en_x and y == en_y:
            print(grid[en_x][en_y]-1)
            break

        for i in range(8):
            nx = x + dx[i]
            ny = y + dy[i]

            if 0 <= nx < I and 0 <= ny < I:
                if grid[nx][ny] == 0:
                    grid[nx][ny] = grid[x][y] + 1
                    queue.append((nx, ny))
