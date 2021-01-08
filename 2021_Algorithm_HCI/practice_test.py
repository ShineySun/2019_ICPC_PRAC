# 모의고사
# 2021. 1. 7
# KMU HCI LAB ALGORITHM STUDY
# PROGRAMMERS LEVEL 1

def solution(answers):
    p_1 = [1,2,3,4,5]
    p_2 = [2,1,2,3,2,4,2,5]
    p_3 = [3,3,1,1,2,2,4,4,5,5]

    sol = [0,0,0]

    for i in range(len(answers)):
        if p_1[i%len(p_1)] == answers[i]:
            sol[0] += 1
        if p_2[i%len(p_2)] == answers[i]:
            sol[1] += 1
        if p_3[i%len(p_3)] == answers[i]:
            sol[2] += 1

    max_num = max(sol)

    answer = [i+1 for i, value in enumerate(sol) if value == max_num]

    return answer
