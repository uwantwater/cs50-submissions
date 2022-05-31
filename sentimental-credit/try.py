from functools import reduce
from operator import add

number = list(str(4003600000000014))

list1 = number[::-1]
list1 = list1[::2]
list2 = number[::2]

print(list1)
print(list2)