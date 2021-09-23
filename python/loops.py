print("using a statically defined list")
list = [1,2,3,4]
for i in list:
	print (i)

print("using a list returned by range(x) function")
for i in range(5):
	print (i)
print("using a list returned by range(x,y) function" )
for i in range(5,10):
	print(i)

print("using a list returned by range(x,y,z) function")
print("using range(x,y)")
for i in range(100,110,2):
	print(i)

#while loop
print ("using while loop")
count = 1
while count<=5:
    print(count)
    count = count + 1

#break statement in while loop
print("while loop with break")
count=1
while True:
    if count>=5:
        break
    print(count)
    count=count+1

#for loop with continue
print("for loop with continue")
for i in range(15):
    if i%2==0:
        continue
    print(i)

#while loop with else
print("while loop with else")
count=1
while count<=5:
    print(count)
    count=count+1
else:
    print("count variable value is greclearater than 5")

#for loop with else
print("for loop with else")
for i in range(10):
    print(i)
else:
    print("for loop else part")