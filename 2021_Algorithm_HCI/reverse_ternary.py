# 3 진법 뒤집기
# 2021. 1. 13
# KMU HCI LAB ALGORITHM STUDY
# PROGRAMMERS LEVEL 1

n = 45

def solution(n):
    ternary_list = []

    while n > 0:
        ternary_list.append(n%3)
        # print(n%3, end = ' ')
        n = n//3

    ans = 0

    for i in range(len(ternary_list)):
        exp = len(ternary_list)-i-1
        # print("exp : {}".format(exp))
        # print("ternary_list : {}".format(ternary_list[i]))
        ans += (3**(len(ternary_list)-i-1))*ternary_list[i]

    return ans

solution(n)
