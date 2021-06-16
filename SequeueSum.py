#正负交错数列前n项和
#描述 1-1/2+2/3-3/5+4/8-5/13+...的前n项和，n由用户输入（n>0），
# 结果用str.format()方法保留小数点后6位数字输出。
f = 0  #分子
m = 1   #分母
m_temp = 1  #前一个分母
my_sum = 1  #前n项和
n = int(input())    #输入前n项
if n == 1:
    print("{:.6f}".format(n))
else:
    for i in range(2, n + 1):
        f += 1
        m, m_temp = m + m_temp, m
        if i % 2 == 0:
            my_sum = my_sum - f / m
        else:
            my_sum = my_sum + f / m
    print("{:.6f}".format(my_sum))