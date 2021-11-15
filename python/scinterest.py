import sys

P=int(sys.argv[1])
R=int(sys.argv[2])
T=int(sys.argv[3])
n=int(sys.argv[4])

print(P,R,T)
print(n**2)
print("Simple Interest:",P*R/100*T)
print("compound interest",P*((1+(R/100)/n)**(n*T)))
