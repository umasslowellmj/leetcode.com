s = "cbacdcbc"
d = {}
res = []
for i in range(1,len(s)):
	if s[-i] not in d:
		d[(s[-i])]= len(s)-i
start = 0

while d:
	letter = min(d, key = lambda x: d.get(x) )
	num = d[letter]
	
	c_min = "z"
	for i in range(start, num):
		if s[i]<c_min and s[i] not in res:
			c_min = s[i]
			start = i+1
	print c_min
	res.append(c_min)
	s.replace(c_min,'')
	
	del d[letter]

	
	
print res
		
	
