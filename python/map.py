numbers1=[4,6,8]
numbers2=(4,6,8)

def computesquare(n):
	return n*n

squared_list_iterator1=map(computesquare,numbers1)

print(squared_list_iterator1)

s2=map(computesquare, numbers2)
print(s2)

s3=map(lambda numbers1,numbers2:numbers1*numbers2,numbers1,numbers2)
print(s3)




