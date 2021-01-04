# 영화감독 숌
# 2021. 1. 4
# KMU FOSCAR ALGORITHM STUDY
# BACKJOON 1436

# get input
N = int(input())

start = 666
str_666 = '666'

while N:
    if  str_666 in str(start):
        N = N-1
    start = start+1

print(start-1)
