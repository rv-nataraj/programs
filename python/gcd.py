import math

def gcd_v1(x,y):
    if (y==0):
        return x
    else:
        print("gcd_v1(%d, %d)"%(y,x%y))
        return gcd_v1(y,x%y)


def gcd_v2(x,y):
    for i in range(1,x):
        if ((x%i==0) and  (y%i==0)):
            gcdvalue=i
            print("%d / %d = %d  -- %d / %d = %d"%(x,i,x%i,y,i,y%i))
    return gcdvalue



x=1000
y=600
print ("-------using recursion--------")
print(gcd_v1(x,y))
print("--------using loops----------")
print(gcd_v2(y,x))






