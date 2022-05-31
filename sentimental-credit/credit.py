import sys
from functools import reduce
from operator import add

def main():

    card_num = input("Number: ")
    while card_num.isnumeric() == False:
        card_num = list(str(input("Number: ")))

    if checksum(card_num) == True:
        num = ""
        card_num = num.join(card_num)
        if card_num[0] == "4":
            print("VISA")
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
    else:
        return False


if __name__ == '__main__':
    main()