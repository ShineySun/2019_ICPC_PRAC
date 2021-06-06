'''
남북으로 흐르는 개울에 동서로 징검다리가 놓여져 있다. 이 징검다리의 돌은 들쑥날쑥하여 높이가 모두 다르다.

이번에 철수는 개울의 서쪽에서 동쪽으로 높이가 점점 높은 돌을 밟다가 높이가 점점 낮은 돌을 밟으면서 개울을 지나가려고 한다.
돌의 높이가 서쪽의 돌부터 동쪽방향으로 주어졌을 때 철수가 밟을 수 있는 돌의 최대 개수는?

입력형식
첫 번째 줄에 돌의 개수 N이 주어진다. 두 번째 줄에 돌의 높이 Ai (1 ≤ i ≤ N)가 서쪽부터 동쪽으로 차례로 주어진다.

입력은 다음 조건을 만족한다.
    1 ≤ N ≤ 3 × 105 인 정수
    1 ≤ Ai ≤ 108

출력형식
첫 번째 줄에 철수가 밟을 수 있는 돌의 최대 개수를 출력하라.

입력예제
5
3 2 4 5 1

출력예제
4
'''

N = int(input())

grid = list(map(int, input().split()))
reverse_grid = grid[::-1]

rocks_up = [1 for _ in range(N)]
rocks_down = [1 for _ in range(N)]

for i in range(N):
    for j in range(i):
        if grid[i] > grid[j]:
            rocks_up[i] = max(rocks_up[i], rocks_up[j]+1)
        if reverse_grid[i] > reverse_grid[j]:
            rocks_down[i] = max(rocks_down[i], rocks_down[j]+1)

# print(rocks_up)
# print(rocks_down)
# print([x+y for x,y in zip(rocks_up, rocks_down)])
out_list = [0]*N

for i in range(N):
    out_list[i] = rocks_up[i] + rocks_down[N-i-1] -1

print(max(out_list))
