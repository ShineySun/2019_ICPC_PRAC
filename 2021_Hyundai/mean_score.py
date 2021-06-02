# 성적 평균
# N명의 학생들의 성적이 학번순서대로 주어졌다. 학번 구간 [A, B]가 주어졌을 때 이 학생들 성적의 평균을 구하는 프로그램을 작성하라.
#
# 첫 번째 줄에 학생 수 N과 구간 수 K가 주어진다. 두 번째 줄에는 학생의 성적 Si (1 ≤ i ≤ N)가 주어진다. i + 2 (1 ≤ i ≤ K)번째 줄에는 i번째 구간 Ai, Bi가 주어진다.
#
# 입력은 다음 조건을 만족한다.
#     1 ≤ N ≤ 106 인 정수
#     1 ≤ K ≤ 104 인 정수
#     1 ≤ Si ≤ 100 인 정수
#     1 ≤ Ai ≤ Bi ≤ N
#
'''
5 3
10 50 20 70 100
1 3
3 4
1 5
'''
N, K = map(int, input().split())

student = list(map(int, input().split()))

sum_score = [0]

for i in range(len(student)):
    sum_score.append(sum(student[:i+1]))

for k in range(K):
    Ai, Bi = map(int, input().split())

    mean = round((sum_score[Bi] - sum_score[Ai-1])/(Bi-Ai+1),2)

    print(mean)
