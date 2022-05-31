from functools import reduce
from operator import add

number = list(str(378282246310005))

listm = list(str(378282246310005))
listn = list(str(378282246310005))

del listm[-1]
for i in range(len(listm) - 1, 0, -2):
    print(listm[i])

print(listm)
print(listn)