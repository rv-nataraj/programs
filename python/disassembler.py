import dis

def func1(num):
	for i in range(10):
		print(i)

def func2():
	print("hello")

dis.dis(func1)
dis.dis(func2)

