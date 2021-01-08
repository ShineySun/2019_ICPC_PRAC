# 완주하지 못한 선수
# 2021. 1. 6
# KMU HCI LAB ALGORITHM STUDY
# PROGRAMMERS LEVEL 1

def solution(participant, completion):
    dictionary = {}
    for person in participant:
        if person in dictionary.keys():
            dictionary[person] += 1
        else:
            dictionary[person] = 1

    for finisher in completion:
        dictionary[finisher] -= 1

    answer = [k for k,v in dictionary.items() if v>0]
    answer = answer[0]

    return answer
