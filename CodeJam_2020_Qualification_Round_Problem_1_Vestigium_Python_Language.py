import numpy as np
t = int(input())
for i in range(t) :
    n = int(input())
    row = 0
    column = 0
    matrix = []
    for j in range(n) :
        matrix.append(input().split())
    arr = np.array(matrix,dtype = 'i')
    # print(arr)
    for j in range(n) :
        if len(set(arr[j])) != n :
            row += 1
    arr = arr.transpose()
    # print(arr)
    for j in range(n) :
        if len(set(arr[j])) != n :
            column += 1
    # print(np.sum(np.diagonal(arr)))
    # print(row)
    # print(column)
    print("Case #{}: {} {} {}".format(i+1,sum(np.diagonal(arr)),row,column))