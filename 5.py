a=eval(input('Enter elements:'))
l=list(a)
print("The original list : "+str(l))
r=[x for x in range(max(l)+1) if x not in l]
print("The list of missing elements : " + str(r))
