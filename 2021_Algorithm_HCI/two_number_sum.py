# 두 개 뽑아서 더하기
# 2021. 1. 5
# KMU FOSCAR ALGORITHM STUDY
# PROGRAMMERS LEVEL 1

numbers = [2,1,3,4,1]

def solution(numbers):
    ans = []
    for i in range(len(numbers)-1):
        for j in range(i+1, len(numbers)):
            ans.append(numbers[i] + numbers[j])
            #print(numbers[i] + numbers[j])

    ans = list(set(ans))
    ans = sorted(ans)

    return ans

result = [2,3,4,5,6,7]
