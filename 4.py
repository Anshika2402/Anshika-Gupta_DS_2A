a=eval(input('Enter elements:'))
l=list(a)
n=int(input('Specify index of removal:'))
if n in range(len(l)):
    r=l.pop(n)
    print('Deleted value: ',r)
    print('List after deletion: ',l)
else:
    print('Index out of range.')
