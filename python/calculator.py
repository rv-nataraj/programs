x=float(0)
y=float(0)
result=0

def add(x,y):
    return x+y

def sub(x,y):
    return x-y

def multiply(x,y):
    return x*y

def getinputs():
    global x
    x=float(input())
    global y
    y=float(input())


while True:
    print("0 - Get inputs")
    print("1 - Addition")
    print("2 - Subtraction")
    print("3 - Multiplication")
    print("5 - Exit")

    choice=int(input("Enter your choice? "))
    if choice==5:
        break
    if choice==1:
        result=add(x,y)
        print(result)
    if choice==0:
        getinputs()
        


