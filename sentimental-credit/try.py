from functools import reduce
from operator import add

number = list(str(378282246310005))

listm = list(str(378282246310005))
listn = list(str(378282246310005))

del listm[-1]
listm = listm[::-1]
listm = listm[::2]

print(listm)
print(listn)