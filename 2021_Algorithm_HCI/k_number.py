# k 번째 수
# 2021. 1. 8
# KMU HCI LAB ALGORITHM STUDY
# PROGRAMMERS LEVEL 1

def solution(array, commands):

    answer = []

    for command in commands:
        tmp_list = array[command[0]-1:command[1]]
        sorted_list = sorted(tmp_list)

        answer.append(sorted_list[command[2]-1])

    return answer
