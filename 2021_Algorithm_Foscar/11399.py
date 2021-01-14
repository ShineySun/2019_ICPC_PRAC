# ATM
# 2021. 1. 14
# KMU FOSCAR ALGORITHM STUDY
# BACKJOON 11399
#https://github.com/ShineySun/Algorithm_KMU

N = int(input())

people = list(map(int, input().split()))

people.sort()

total = 0
#print(people)

for i in range(N):
    #print(sum(people[:i]))

    total += sum(people[:i+1])
    #print("total : {}".format(total))

print(total)
