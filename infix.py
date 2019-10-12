

values=[]
op=[]



def opt(a1,a2,opp):
	if opp=='+':
		return a1 + a2
	if opp=='-':
		return a1 - a2
	if opp=='*':
		return a1 * a2
	if opp=='/':
		return a1//a2




def check(op):
	if op in ('+','-'):
		return 1
	elif op in ('*','/'):
		return 2
	else:
		return 0	
		



braces=['(','{','[']
braces1=[']','}',')']	



x="10*(2+3)"

List=[]

i=0

while i < len(x):
	
	if x[i] in braces:
		op.append(x[i])
	elif x[i].isdigit():
		val=0
		while (i<len(x) and x[i].isdigit()):
			val=val*10+int(x[i])
			i+=1	
			
		values.append(val)
		i-=1
		

	elif x[i] in braces1:
		result=0
		
		while (len(op)!=0 and op[-1] not in braces):
			a2=values.pop()
			a1=values.pop()
			opp=op.pop()
			result=opt(a1,a2,opp)
		

			values.append(result)
		op.pop()

	else:
		result=0
		while(len(op)!=0 and check(op[-1])>=check(x[i])):

			a2=values.pop()
			a1=values.pop()
			opp=op.pop()

			result=opt(a1,a2,opp)
			values.append(result)

		op.append(x[i])
		
	i+=1
result=0
while len(op)!=0:

	a2=values.pop()
	a1=values.pop()
	opp=op.pop()
	result=opt(a1,a2,opp)
	values.append(result)
		
print(values[-1])
			
			

