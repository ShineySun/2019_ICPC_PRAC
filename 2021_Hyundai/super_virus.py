'''
수퍼바이러스가 숙주의 몸속에서 0.1초당 P배씩 증가한다.
처음에 수퍼바이러스 K마리가 있었다면 N초 후에는 총 몇 마리의 수퍼바이러스로 불어날까?
N초 동안 죽는 수퍼바이러스는 없다고 가정한다.

수퍼바이러스는 일반 바이러스에 비해서 훨씬 오래 생존할 수 있기 때문에 N이 매우 클 수 있다.

입력형식
첫 번째 줄에 처음 바이러스의 수 K, 증가율 P, 총 시간 N(초)이 주어진다.

입력은 다음 조건을 만족한다.
    1 ≤ K ≤ 108 인 정수
    1 ≤ P ≤ 108 인 정수
    1 ≤ N ≤ 1016 인 정수

출력형식
최종 바이러스 개수를 1000000007로 나눈 나머지를 출력한다.

입력예제
1 2 1

출력예제
1024
'''

K, P, N = map(int, input().split())

num = K

def multiple(p, n):
    if n == 1:
        return p%1000000007
    elif n%2 == 0:
        tmp = multiple(p, n//2)
        return tmp*tmp%1000000007
    else:
        tmp = multiple(p, n//2)
        return tmp*tmp*p%1000000007


for n in range(N):
    num = multiple(P, 10*N)

print(num)
