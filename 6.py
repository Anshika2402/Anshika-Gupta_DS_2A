a=eval(input('Enter elements:'))
l=list(a)
x=[]
for i in l:
    if l.count(i)>1:
        if i not in x:
            print("Repeated number: ", i)
            x.append(i)
