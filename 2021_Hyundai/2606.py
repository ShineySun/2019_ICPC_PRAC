from collections import deque

N = int(input())
K = int(input())

grid = [[0]*(N+1) for _ in range(N+1)]

for _ in range(K):
    a,b = map(int, input().split())

    grid[a][b] = 1
    grid[b][a] = 1

def bfs(start):
    discoverd = [start]

    queue = deque()
    queue.append(start)

    while queue:
        v = queue.popleft()

        for w in range(len(grid[start])):
            if grid[v][w] == 1 and (w not in discoverd):
                discoverd.append(w)
                queue.append(w)

    return len(discoverd)-1

print(bfs(1))
