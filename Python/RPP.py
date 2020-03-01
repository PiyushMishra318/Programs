# Q. Rhezo and Prime Problems

# Check Prime No.
def checkPrime(num) :
	if num > 2:
		for i in range(2,num):
			if (num%i) == 0:
				break;
		else:
			return 1
	else:
		return 0

#Find Max Prime
def maxPrime(num):
	count = 0
	for i in range(num,0,-1):
		if (checkPrime(i)):
			num = i
			break;
		count += 1
	return num

#Generate the maximum list
def generateList(N,num,points_a):
	sumolist = []
	max_list = []
	rest_list = []
	list1 = []
	list2 = []
	all_lists = []
	for i in range(0,N-num+1):
		all_lists.append(points_a[i:num+i]) 
	for x in all_lists:
		sumolist.append(sum(x))
	ind = sumolist.index(max(sumolist))
	max_list.append(all_lists[ind])
	for i in max_list[0]:
		points_a.remove(i)
	print(max(sumolist))
	list1 = points_a[:ind]
	if len(list1)==0:
		list2 = points_a
	else:
		points_a.remove(list1[0])
		list2 = points_a
	if len(list1)==0 and len(list2)==0:
		return(max(sumolist))
	elif len(list1)==0 and len(list2)!=0:
		return(max(sumolist)+maximize(len(list2),list2))	
	elif len(list1)!=0 and len(list2)==0:
		return(max(sumolist)+ maximize(len(list1),list1))	
	else:
		return(max(sumolist)+ maximize(len(list1),list1)+maximize(len(list2),list2))	



# Maximize function
def maximize(N,points_a):
	prime = 0;
	if (N <= 2) :
		if(N==2):
			return(sum(points_a))
		return 0;
	else:
		if checkPrime(N):
			return(sum(points_a))
		else:
			prime = maxPrime(N)
			return	generateList(N,prime,points_a)

N = int(input());

points = input();

points_a = [int(i) for i in points.split()];

print(maximize(N,points_a))


