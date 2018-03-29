import math

def do_it(K, S):
	ans = ''
	S = S.replace('-', '')
	if len(S)==0:
		return ''
	group = int(math.ceil(len(S)*1.0/K*1.0))
	for i in range(len(S)):
		if S[i].islower():
			S = S.replace(S[i], S[i].upper())

	print group
	for per in range(group):
		tmp = S[-K:] 
		ans = tmp + '-'+ ans
		S = S[:-K]

	if ans[0]=='-':
		ans = ans[1:]
	return ans[:-1]


print do_it(2, "-")
