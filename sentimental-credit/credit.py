import sys
from functools import reduce
from operator import add


def main():

    # asking for input and converting it to a list of numbers
    card_num = list(str(input("Number: ")))

    # calling the credit card checksum function based on Luhn's Algorithm
    if checksum(card_num) == True:
        num = ""
        card_num = num.join(card_num)
        if card_num[0] == "4":
            print("VISA")
        elif card_num[0] == "3":
            print("AMEX")
        elif card_num[0] == "5":
            print("MASTERCARD")
        else:
            print("INVALID")
    else:
        print("INVALID")


def checksum(number):
    listm = number.copy()
    listn = number.copy()
    list1 = []
    list2 = []

    # deleting the last element because we dont need it for this list
    del listm[-1]
    # for every other digit from second to last
    for i in range(len(listm) - 1, -1, -2):
        list1.append(int(listm[i]))
    # for every other digit from the last
    for i in range(len(listn) - 1, -1, -2):
        list2.append(int(listn[i]))

    # Source : Geeks for Geeks. Multiplies every element in list by 2
    list1 = list(map(lambda x: x * 2, list1))
    # initialising variables for separating double digits to two single digits
    items = []
    i = 0
    n = len(list1)
    # algorithm to convert double digits to two single digits
    while i < n:
        if list1[i] > 9:
            items += list(str(list1[i]))
            items = list(map(int, items))
            list1.remove(list1[i])
            i = i - 1
            n = len(list1)
        else:
            i = i + 1
    # now we add the converted digits to our original list
    list1 += items
    print(list1)
    list1 = reduce(add, list1)
    list2 = reduce(add, list2)

    sum = list1 + list2

    if sum % 10 == 0:
        return True
    else:
        return False


if __name__ == '__main__':
    main()