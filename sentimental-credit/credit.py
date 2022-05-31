import sys
from functools import reduce
from operator import add

def main():
    card_num = input("Number: ")
    while card_num.isnumeric() == False:
        card_num = input("Number: ")
    if checksum(card_num) == True:
        if
    else:
        sys.exit("INVALID\n")

def checksum(number):
    list1 = []
    list2 = []
    for i in range(len(number) - 1, 0, -2):
        list1.append(i)
    for i in range(len(number), 0, -2):
        list2.append(i)
    list1 = list(map(lambda x : x * 2, list1))
    list1 = reduce(add, list1)
    list2 = reduce(add, list2)
    sum = list1 + list2
    if sum % 10 == 0:
        return True
    return False


if __name__ == '__main__':
    main()