import sys


m = int(raw_input().strip())
B = map(int,raw_input().strip().split(' '))

arr = []
def func(A,n):
	for i in range(0,n-1):
		for j in range(i+1, n):
			if j!=i and A[i]==A[j]:
				arr.append(abs(i-j))
	return arr	
	
def func1():
	lst = func(B,m)
	if len(lst)==0:
		return -1
	else:
		lst.sort()
		return lst[0]
print func1()
