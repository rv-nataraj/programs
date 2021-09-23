import datetime
import time
import math

def primecheck_v1(n):
	flag=True
	for i in range(2,n):
		print ("%d %%  %d is %d"%(n,i,n%i))
		if (n%i==0):
			flag=False
	if (flag):
		print ("The number %d is Prime" %(n))
	else:
		print ("The number %d is Not Prime"%(n))


def primecheck_v2(n):
    if (n%2==0):
        print ("The number %d is Not Prime"%(n))
    flag=True
    for i in range(3,n,2):
		print ("%d %%  %d is %d" %(n,i,n%i))
		if (n%i==0):
			flag=False
    if (flag):
        print ("The number %d is Prime" %(n))
    else:
		print ("The number %d is Not Prime"%(n))

def primecheck_v3(n):
        flag=True
        for i in range(2,int(math.sqrt(n)+1)):
                print ("%d %%  %d is %d"%(n,i,n%i))
                if (n%i==0):
                        flag=False
        if (flag):
                print ("The number %d is Prime" %(n))
        else:
                print ("The number %d is Not Prime"%(n))


primecheck_v1(13)
primecheck_v2(25)
primecheck_v3(25)

