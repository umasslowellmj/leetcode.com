def maxx(node, status):
	if node==None:
		return 0
	else:
		if status==True:
			return maxx(node, 1) = maxx(node.left, 0)+maxx(node.right, 0) + node.value
		else:
	maxx(node, 0) = max(maxx(node.left, 0), maxx(node.left, 1)) + max(maxx(node.right, 1), maxx(node.right, 0))
