t = int(input())
for i in range(t) :
    s = input()
    open = 0
    close = 0
    string = ""
    for j in range(len(s)) :
        if open <= int(s[j]) :
            for k in range(int(s[j])-open) :
                string += '('
                open += 1
                close += 1
        string += s[j]
        if j+1 <= len(s)-1 :
            if close >= int(s[j+1]) :
                for k in range(open-int(s[j+1])) :
                    string += ')'
                close -= (open-int(s[j+1]))
                open = close
    for k in range(close) :
        string += ')'
        open -= 1
        close -= 1
    print("Case #{}: {}".format(i+1,string))