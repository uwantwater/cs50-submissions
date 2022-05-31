from functools import reduce
from operator import add

number = list(str(5555555555554444))
number = list(map(int, number))

list1 = list(map(int, number))
list2 = list(map(int, number))

del list1[-1]
#del list1[len(list1):0:-2]
del list2[len(number):0:-2]

print(number)
print(list1)
print(list2)
list2 = list(map(lambda x : x * 2, list2))

list2 = reduce(add, list2)
list1 = reduce(add, list1)

sum = list1 + list2
if sum % 10 == 0:
    print("True")
else:
    print(f"False {sum}")