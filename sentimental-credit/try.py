number = [1,2,3,4,5,6,7,8,9]

list1 = []
list2 = []

for i in range(len(number), 0, -2):
    list1.append(number[i])
for i in range(len(number - 1), 0, -2):
    list2.append(number[i])

print(list1)
print(list2)