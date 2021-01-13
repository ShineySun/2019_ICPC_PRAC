# 2016 년
# 2021. 1. 12
# KMU HCI LAB ALGORITHM STUDY
# PROGRAMMERS LEVEL 1

def solution(a, b):
    week = ["FRI","SAT","SUN","MON","TUE","WED","THU"]
    days = [31,29,31,30,31,30,31,31,30,31,30,31]
    result = 0
    if a>1:
        for i in range(0,a-1) :
            result += days[i]

    result += b

    answer = week[result%7-1]
    return answer
