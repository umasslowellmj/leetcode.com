
b = sorted([ [2 ,9 ,10], [3, 7 ,15], [5, 12, 12], [0,15,5],[5,14,7] ], key=lambda x: x[2])

res = []

pre_left = b[-1][0]
pre_right = b[-1][1]
pre_height = b[-1][2]

res.append([pre_left, pre_height])
for i in range(len(b)-2,-1,-1):
	curr_left = b[i-5][0]
	curr_right = b[i-5][1]
	curr_height = b[i-5][2]
	if curr_height!=pre_height and curr_left<pre_left:
		res.append([curr_left, curr_height])
	if curr_height!=pre_height and pre_right<curr_right:
		res.append([pre_right, curr_height])
	pre_height = min(curr_height,pre_height)
	pre_right = max(curr_right,pre_right)
	pre_left = min(curr_left,pre_left)
	
res.append([curr_right, 0])

print res


