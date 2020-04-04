t = int(input())
for i in range(t) :
    n = int(input())
    time = []
    flag = False
    string = ""
    # cstart = 0
    cend = 0
    # jstart = 0
    jend = 0
    for j in range(n) :
        temp = input().split()
        # s = "I" + str(j+1) Error in last sorting Because list sorted in 'I1','I10','I2' etc.
        s = j+1
        temp.append(s)
        time.append(temp)
    for j in range(n) :
        for k in range(2) :
            time[j][k] = int(time[j][k])
    time.sort()
    # print(time)
    for j in time :
        if j[0]>=cend :
            j.append("C")
            # cstart = j[0]
            cend = j[1]
        elif j[0]>=jend :
            j.append("J")
            # jstart = j[0]
            jend = j[1]
        else :
            flag = True
            break
    if flag :
        string = "IMPOSSIBLE"
    else :
        time.sort(key = lambda x : x[:][2]) # If use s = "I" + str(j+1) then error in this sorting run this program by giving n value greater than 10.
        # print(time)
        for j in time :
            string += j[3]
    print("Case #{}: {}".format(i+1,string))