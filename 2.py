a=eval(input('Enter elements:'))
l=list(a)
n=int(input('Specify index:'))
if n in range(len(l)):
    x=int(input('Enter value:'))
    l.insert(n,x)
    print('List after insertion: ',l)
else:
    print('Index out of range.')
