import math
def f(x):
    if x==1:
        return '2(0)'
    if x==2:
        return '2'
    if x==3:
        return '2+2(0)'
        
    n=int(math.log(x,2))
    t=2**n
    if x==t:
        return "2("+f(n)+")"
    else:
        return "2("+f(n)+")+"+f(x-t)

print(f(int(input())))
