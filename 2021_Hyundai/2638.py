from collections import deque

n,m = map(int, input().split())
a = [list(map(int, input().split())) for i in range(n)]

c = 0

dx = [-1,1,0,0]
dy = [0,0,-1,1]

def bfs():
    de = deque()
    de.append((0,0))

    ch = [[-1]*m for i in range(n)]

    ch[0][0] = 0

    while de:
        x,y = de.popleft()

        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]

            if 0 <= nx < n and 0 <= ny < m:
                if ch[nx][ny] == -1:
                    if a[nx][ny] >= 1:
                        a[nx][ny] += 1
                    else:
                        ch[nx][ny] = 0
                        de.append([nx,ny])

while True:
    bfs()
    print(a)
    cnt = 0

    for i in range(n):
        for j in range(m):
            if a[i][j] >= 3:
                a[i][j] = 0
                cnt = 1
            elif a[i][j] == 2:
                a[i][j] = 1
    if cnt == 1:
        c += 1
    else:
        break

print(c)
