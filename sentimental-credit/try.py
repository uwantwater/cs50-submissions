import functools

number = [1,2,3,4,5,6,7,8,9,10,11]

list1 = []
list2 = []

for i in range(len(number) - 1, 0, -2):
    list1.append(i)
for i in range(len(number), 0, -2):
    list2.append(i)
list1 = list(map(lambda x : x * 2, list1))
list1 = list(functools.reduce(lambda x,y : x+y, list1))

print(list1)
print(list2)