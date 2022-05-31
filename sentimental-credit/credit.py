import sys
from functools import reduce
from operator import add

def main():

    card_num = list(str(input("Number: ")))

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
        sys.exit("INVALID")

def checksum(number):
    listm = number.copy()
    listn = number.copy()
    list1 = []
    list2 = []

    del listm[-1]
    for i in range(len(listm) - 1, -1, -2):
        list1.append(int(listm[i]))
    for i in range(len(listn) - 1, -1, -2):
        list2.append(int(listn[i]))
    print(list1)
    print(list2)
    list1 = list(map(lambda x : x * 2, list1))
    for item in list1:
        if item
    print(list1)
    list1 = reduce(add, list1)
    list2 = reduce(add, list2)

    sum = list1 + list2
    print(sum)

    if sum % 10 == 0:
        return True
    else:
        return False


if __name__ == '__main__':
    main()