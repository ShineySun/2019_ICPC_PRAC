# 크레인 인형뽑기 게임
# 2021. 1. 4
# KMU HCI LAB ALGORITHM STUDY
# PROGRAMMERS LEVEL 1

def solution(board, moves):
    oper_list = list()

    answer = 0

    for op in moves:
        #print(op)
        for j in range(len(board)):
            if board[j][op-1]:
                if len(oper_list) != 0 and oper_list[-1] == board[j][op-1]:
                    board[j][op-1] = 0
                    oper_list.pop()
                    answer += 2

                else:
                    oper_list.append(board[j][op-1])
                    board[j][op-1] = 0
                break

    return answer
