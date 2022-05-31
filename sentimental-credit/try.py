from functools import reduce
from operator import add

number = list(str(378282246310005))

listm = list(str(378282246310005))
listn = list(str(378282246310005))
list1 = []
list2 = []

del listm[-1]
for i in range(len(listm) - 1, -1, -2):
    list1.append(int(listm[i]))
for i in range(len(listn) - 1, -1, -2):
    list2.append(int(listn[i]))

list1 = list(map(lambda x : x * 2, list1))
for n in list1:
    if n > 9:
        pos = list1.index(n)
        items = list(str(list1[pos]))
        print(items)
        list1.remove(n)
        list1.append(items)

print(list1)
print(list2)