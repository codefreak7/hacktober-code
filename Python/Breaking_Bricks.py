"""
A solution to codechef problem
Question link: https://www.codechef.com/JAN20B/problems/BRKBKS/
"""


arr = []
arr_copy = []

t = int(input())

for k in range(0,t):
	counter = 0
	ans = 0
	count = 0

	s,a,b,c = raw_input().split()

	s = int(s)
	arr = [int(a),int(b),int(c)]
	arr_copy = [int(a),int(b),int(c)]

	while(count <= len(arr)):
		sum1 = 0
		for i in range(counter,len(arr)):
			sum1 += arr[i]
			count+=1
			if(sum1 > s):
				counter = i
				ans+=1
				break

	print(ans+1)
