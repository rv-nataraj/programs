file=open("numbers.txt")
sum=0
for line in file:
    print(line)
    for n in line.split(','):
        sum=sum+int(n)
print(sum)
file.close()
