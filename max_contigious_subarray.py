arr = [1,2,-13,-2,12,-7,-3,12,5,6]
 
arr1 = []
arr1.append(arr[0])
start, end = 0, 0
for i in range(len(arr)-1):
	arr1.append(arr1[i] + arr[i+1])
print arr1
for  i in range(len(arr1)):
	if arr1[i]==max(arr1):
		end = i+1
	if arr1[i]==min(arr1):
		start = i+1
print arr[start:end]
