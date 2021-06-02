'''
루팡은 배낭을 하나 메고 은행금고에 들어왔다. 금고 안에는 값비싼 금, 은, 백금 등의 귀금속 덩어리가 잔뜩 들어있다. 배낭은 W ㎏까지 담을 수 있다. 각 금속의 무게와 무게당 가격이 주어졌을 때 배낭을 채울 수 있는 가장 값비싼 가격은 얼마인가?

루팡은 전동톱을 가지고 있으며 귀금속은 톱으로 자르면 잘려진 부분의 무게만큼 가치를 가진다.
입력형식
첫 번째 줄에 배낭의 무게 W와 귀금속의 종류 N이 주어진다. i + 1 (1 ≤ i ≤ N)번째 줄에는 i번째 금속의 무게 Mi와 무게당 가격 Pi가 주어진다.

입력은 다음 조건을 만족한다.
    1 ≤ N ≤ 106 인 정수
    1 ≤ W ≤ 104 인 정수
    1 ≤ Mi, Pi ≤ 104 인 정수

출력형식
첫 번째 줄에 배낭에 담을 수 있는 가장 비싼 가격을 출력하라.

입력예제
100 2
90 1
70 2

출력예제
170
'''

W, N = map(int, input().split())

stuff = []

for _ in range(N):
    stuff.append(list(map(int, input().split())))

sort_stuff = sorted(stuff, key = lambda stuff : stuff[1], reverse = True)

local_weight = W
local_value = 0

for i in range(len(sort_stuff)):
    if local_weight == 0: break

    if sort_stuff[i][0] <= local_weight:
        local_value += sort_stuff[i][0]*sort_stuff[i][1]
        local_weight -= sort_stuff[i][0]
    else:
        local_value += local_weight*sort_stuff[i][1]
        local_weight = 0

print(local_value)
