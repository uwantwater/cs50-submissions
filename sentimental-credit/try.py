from functools import reduce
from operator import add

number = list(str(371449635398431))
number = list(map(int, number))

list1 = []
list2 = []

for i in range(len(number) - 1, 0, -2):
    list1.append(number[i])
for i in range(len(number) - 2, -1, -2):
    list2.append(number[i])
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