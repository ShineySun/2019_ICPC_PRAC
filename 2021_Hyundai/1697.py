from collections import deque

N,K = map(int, input().split())

visited = [False]*100001

def bfs(N):
    cnt = 0

    queue = deque([[N, cnt]])

    while queue:
        v = queue.popleft()

        position = v[0]
        cnt = v[1]

        if visited[position] == False:
            visited[position] = True

            if position == K:
                return cnt

            cnt += 1

            if (position*2) <= 100000:
                queue.append([position*2, cnt])
            if (position + 1) <= 100000:
                queue.append([position+1, cnt])
            if (position - 1) >= 0:
                queue.append([position-1, cnt])

    return cnt

print(bfs(N))
