# 체육복
# 2021. 1. 11
# KMU HCI LAB ALGORITHM STUDY
# PROGRAMMERS LEVEL 1


def solution(n, lost, reserve):

    sol = []

    N = n - len(lost)

    for lost_person in lost:
        if lost_person in reserve:
            N+=1
            reserve.remove(lost_person)
        elif lost_person-1 in reserve:
            N+=1
            reserve.remove(lost_person-1)
        elif lost_person+1 in reserve:
            if lost_person+1 in lost:
                continue
            N+=1
            reserve.remove(lost_person+1)
    if N > n:
        return n
    return N

# 5	[2, 4]	[1, 3, 5]	5
# 5	[2, 4]	[3]	4
# 3	[3]	[1]	2
