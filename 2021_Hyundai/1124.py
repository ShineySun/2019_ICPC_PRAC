'''
[언더프라임]
자연수 X를 소인수 분해 하면, 곱해서 X가 되는 소수의 리스트가 나온다. 12는 2*2*3이고, 1은 소수가 아니다.
이때, X가 언더프라임이기 위한 조건은 소인수 분해 했을 때, 나오는 소수의 개수가 소수일 때이다. 예를 들어, 12는 언더프라임이다.
그 이유는 나오는 소수의 개수가 3개이기 때문이다. A와 B가 주어졌을 때, A보다 크거나 같고, B보다 작거나 같은 언더프라임의 개수를 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 A와 B가 주어진다. A는 B보다 작거나 같고, A와 B는 100,000보다 작거나 같고, 2보다 크거나 같은 자연수이다.

출력
첫째 줄에 문제의 정답을 출력한다.

예제 입력 1
2 10

예제 출력 1
5
'''
import math

def is_prime_number(n):
    prime_arr = [True for _ in range(n+1)]

    prime_arr[0] = False
    prime_arr[1] = False

    for i in range(2, int(math.sqrt(n))+1):
        if prime_arr[i] == True:

            j = 2
            while i*j <= n:
                prime_arr[i*j] = False
                j+=1
    return [i for i in range(2, n+1) if prime_arr[i]]

N,M = map(int, input().split())

prime = is_prime_number(M)

result = []

for i in range(N, M+1):
    if i in prime:
        continue
    else:
        num = 2
        cnt = 0

        while i > 1:
            if i % num == 0:
                i /= num
                cnt+=1
            else:
                num += 1
        result.append(cnt)

out = 0

for i in range(len(result)):
    if result[i] in prime:
        out+=1

print(out)
