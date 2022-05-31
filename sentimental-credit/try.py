from functools import reduce
from operator import add

number = list(str(5105105105105100))
number = list(map(int, number))

list1 = number
list2 = number

del list1[-1]
del list2[0:len(number)-1:2]

print(number)
print(list1)
print(list2)
list1 = list(map(lambda x : x * 2, list1))

list2 = reduce(add, list2)
list1 = reduce(add, list1)

sum = list1 + list2
if sum % 10 == 0:
    print("True")
else:
    print(f"False {sum}")