# python code for bubble sort 
# declare an array 

deoraja = [323,433,11111,2]
#print array 
print('example array is ', deoraja)

c = len(deoraja)
print('length of array is',c)

for IT in range(0,c):
    # loop from 0 to length-1 (i.e here 4-1=3))
    for TY in range (0,c-IT-1):
        if deoraja[TY]>deoraja[TY+1]:
            PR = deoraja[TY]
            deoraja[TY]= deoraja[TY+1]
            deoraja[TY+1]= PR
print ('AFTER BUBBLE SORT array becomes ',deoraja) 