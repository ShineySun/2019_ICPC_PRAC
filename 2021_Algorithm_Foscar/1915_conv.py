# 가장 큰 정사각형
# 2021. 1. 13
# KMU FOSCAR ALGORITHM STUDY
# BACKJOON 1915
# Convolution Version

import numpy as np
from scipy import signal

N,M = map(int, input().split())
table = [list(map(int, list(input().rstrip()))) for _ in range(N)]

#numpy_table = np.array(table, dtype=np.int32)
numpy_table = table

max_kernel_size = N if N < M else M

# Module Not Found Error......
# BOJ does not support any library...
def conv_array(table, kernel_size):
     kernel = np.ones((kernel_size, kernel_size), dtype=np.int32)

     f = signal.convolve2d(table, kernel)

     if kernel_size*kernel_size in f:
         return kernel_size*kernel_size
     else:
         return -1

# Time Over
# 시간 초과 날거라고 예상했었음..
# 그냥 라이브러리 없이 Convolution 기능 구현
def new_conv_array(table, kernel_size, N, M):
    start_x = 0
    start_y = 0
    end_x = N - kernel_size
    end_y = M - kernel_size

    if end_x < start_x:
        end_x = start_x
    if end_y < start_x:
        end_y = start_y

    for i in range(start_x, end_x+1):
        for j in range(start_y, end_y+1):
            false_flag = 0
            true_flag = 0
            for m in range(kernel_size):
                for n in range(kernel_size):
                    if table[i+m][j+n] == 1:
                        if m == kernel_size-1 and n == kernel_size -1:
                            true_flag = 1
                        continue
                    else: false_flag = 1
                if false_flag == 1:
                    break
                if true_flag == 1:
                    return kernel_size*kernel_size
    return -1



for i in range(max_kernel_size, 0, -1):
    ans = new_conv_array(table, i, N, M)

    if ans != -1:
        print(ans)
        break
