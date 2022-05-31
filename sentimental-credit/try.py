from functools import reduce
from operator import add

number = list(str(4003600000000014))

listm = list(str(4003600000000014))
listn = list(str(4003600000000014))
list1 = []
list2 = []

del listm[-1]
for i in range(len(listm) - 1, -2, -2):
    list1.append(listm[i])
for i in range(len(listn) - 1, -2, -2):
    list2.append(listn[i])

print(list1)
print(list2)