# 잃어버린 괄호
# 2021. 1. 15
# KMU FOSCAR ALGORITHM STUDY
# BACKJOON 1541
# https://github.com/ShineySun/Algorithm_KMU

# - 뒷 부분의 값을 최대한 크게
# 생각하는데 꾀 오래 걸림....
# 앞에 0 있다는 조건 간과 ㅡㅡ
expression = input().split('-')

# init
total = 0

# first expression
first_expression = expression[0].split('+')
#print(first_expression)

for first_exp in first_expression:
    total += int(first_exp)

second_nums = []

for second_exp in expression[1:]:
    tmp_total = 0
    tmp_list = second_exp.split('+')
    for tmp_num in tmp_list:
        tmp_total += int(tmp_num)

    second_nums.append(tmp_total)



# print(total)
# print(sum(second_nums))
print(total - sum(second_nums))
