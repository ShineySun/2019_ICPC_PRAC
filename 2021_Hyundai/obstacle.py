'''
자율주행팀 SW 엔지니어인 당신에게 장애물과 도로를 인식할 수 있는 프로그램을 만들라는 업무가 주어졌다.

우선 [그림 1]과 같이 정사각형 모양의 지도가 있다. 1은 장애물이 있는 곳을, 0은 도로가 있는 곳을 나타낸다.

당신은 이 지도를 가지고 연결된 장애물들의 모임인 블록을 정의하고, 불록에 번호를 붙이려 한다.
여기서 연결되었다는 것은 어떤 장애물이 좌우, 혹은 아래위로 붙어 있는 경우를 말한다. 대각선 상에 장애물이 있는 경우는 연결된 것이 아니다.

[그림 2]는 [그림 1]을 블록 별로 번호를 붙인 것이다.
지도를 입력하여 장애물 블록수를 출력하고, 각 블록에 속하는 장애물의 수를 오름차순으로 정렬하여 출력하는 프로그램을 작성하시오.

입력 값의 첫 번째 줄에는 지도의 크기 N(정사각형임으로 가로와 세로의 크기는 같으며 5≤N≤25)이 입력되고, 그 다음 N줄에는 각각 N개의 자료(0혹은 1)가 입력된다.

첫 번째 줄에는 총 블록 수를 출력 하시오.
그리고 각 블록 내 장애물의 수를 오름차순으로 정렬하여 한 줄에 하나씩 출력하시오.

[Input]
7
1110111
0110101
0110101
0000100
0110000
0111110
0110000

[Output]
3
7
8
9
'''

# N X N
N = int(input())
# MAP
road = []
# VISTIED ARRAY
visited = [[0 for _ in range(N)] for _ in range(N)]
# ANSWER ARRAY
ans = []
# COUNTER
cnt = 0

for n in range(N):
    road.append(list(map(int, input())))

def dfs(col, row):
    if visited[col][row] == 0:
        visited[col][row] = 1

        if road[col][row] == 1:
            ans[cnt-1] += 1

            if row > 0:
                if visited[col][row-1] == 0:
                    dfs(col, row-1)
            if row < N-1:
                if visited[col][row+1] == 0:
                    dfs(col, row+1)
            if col > 0:
                if visited[col-1][row] == 0:
                    dfs(col-1, row)
            if col < N-1:
                if visited[col+1][row] == 0:
                    dfs(col+1, row)

for i in range(N):
    for j in range(N):
        if visited[i][j] == 0 and road[i][j] == 1:
            ans.append(0)
            cnt += 1
            dfs(i,j)


print(cnt)

ans.sort()

for out in ans:
    print(out)
