#in python

# first program

def prog_1():
	#get input
	n=input("first number: ")
	m=input("second number: ")
	#testing
#	print n,m,type(n),type(m)
	#check
	if type(n)==int  and type(m)==int:
		return str(n)+"*"+str(m)+"="+str(n*m)
	else:
		return "error"

def prog_2():
	#get input
	num=input("enter number: ")
	#testing
#	print num, type(num)
	#check
	if type(num)==int:
		for i in range(1,10):
			print str(num)+"*"+str(i)+"="+str(num*i)
	else:
		print "error"



#action
print prog_1()
prog_2()

