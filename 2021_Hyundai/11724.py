import sys

sys.setrecursionlimit(10000)

N,M = map(int, sys.stdin.readline().split())

graph = [[] for _ in range(N+1)]
graph[0] = [0,0]
visited = [False for _ in range(N+1)]

cnt = 0

for _ in range(M):
    start, end = map(int, sys.stdin.readline().split())

    graph[start].append(end)
    graph[end].append(start)
    graph[start].sort()
    graph[end].sort()

def dfs(graph, start, visited):
    visited[start] = True

    for i in graph[start]:
        if not visited[i]:
            dfs(graph, i, visited)

for i in range(1, len(visited)):
    if visited[i] == False:
        cnt += 1
        dfs(graph, i, visited)

print(cnt)
