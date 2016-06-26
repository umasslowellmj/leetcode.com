
import sys


n1,n2,n3 = raw_input().strip().split(' ')
n1,n2,n3 = [int(n1),int(n2),int(n3)]
h1 = map(int,raw_input().strip().split(' '))
h2 = map(int,raw_input().strip().split(' '))
h3 = map(int,raw_input().strip().split(' '))
h1.reverse()
h2.reverse()
h3.reverse()

def func(h):
	for i in range(len(h)-1):
		h[i+1] = h[i+1] + h[i]
	return h

h1 = func(h1)
h2 = func(h2)
h3 = func(h3)

ht = h1 + h2 + h3
ht.sort()
res = []

def func1():
	for i in range(len(ht)-2):
		if ht[i]==ht[i+1] and ht[i]==ht[i+2]:
			res.append(ht[i])
	res.sort()
	print res[-1]


func1()
