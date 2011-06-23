#in python

# first program

def prog_1():
	#get input
	n=input("first number: ")
	m=input("second number: ")
	#testing
	print n,m,type(n),type(m)
	#check
	if type(n)==int  and type(m)==int:
		print "pass"
	else:
		print "error"

def prog_2():
	#get input
	num=input("enter number: ")
	#testing
	print num, type(num)


#action
prog_1()
prog_2()

