# 연산자 끼워넣기
# 2021. 1. 4
# KMU FOSCAR ALGORITHM STUDY
# BACKJOON 14888

from itertools import permutations

# get input
N = int(input())
num_list = list(map(int, input().split()))
num_op_list = list(map(int, input().split()))

op_list = list()

for i in range(4):
    for j in range(num_op_list[i]):
        if i == 0:
            op_list.append("+")
        elif i == 1:
            op_list.append("-")
        elif i == 2:
            op_list.append("*")
        elif i == 3:
            op_list.append("/")

ans_list = list()

for local_op in list(set(permutations(op_list))):

    start_num = num_list[0]
    next_idx = 1

    for tmp_op in list(local_op):
        if tmp_op == "+":
            start_num += num_list[next_idx]
        elif tmp_op == "-":
            start_num -= num_list[next_idx]
        elif tmp_op == "*":
            start_num *= num_list[next_idx]
        elif tmp_op == "/":
            if start_num < 0:
                start_num = -(-start_num//num_list[next_idx])
            else:
                start_num = start_num//num_list[next_idx]
        next_idx += 1

    ans_list.append(start_num)

print(max(ans_list))
print(min(ans_list))








# print(N)
# print(num_list)
# print(num_op_list)
# print(set(list(permutations(op_list))))
