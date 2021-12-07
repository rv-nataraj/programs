import itertools

list1=[1,2,3,4]
print(list1)

list2=["one","two","three","four"]
print(list2)

list3=list(("five","six","seven","eight"))
print(list3)

for i in list1:
    print(i)

for j in list2:
    print(j)

print(list(itertools.combinations(list1,2)))