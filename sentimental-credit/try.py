from functools import reduce
from operator import add

number = [4,0,0,3,6,0,0,0,0,0,0,0,0,0,1,4]

list1 = []
list2 = []

for i in range(len(number) - 1, 0, -2):
    list1.append(i)
for i in range(len(number), 0, -2):
    list2.append(i)
list1 = list(map(lambda x : x * 2, list1))

list2 = reduce(add, list2)
list1 = reduce(add, list1)

sum = list1 + list2
if sum % 10 == 0:
    print("True")
print("False")