import sys

def main():
    card_num = input("Number: ")
    while card_num.isnumeric() == False:
        card_num = input("Number: ")
    if checksum(card_num) == True:

    else:
        sys.exit("INVALID\n")

def checksum(number):
    list1 = []
    list2 = []
    for i in range(len(number), 0, -2):
        list1.append(number[i])
    for i in range(len(number - 1), 0, -2):
        list2.append(number[i])



if __name__ == '__main__':
    main()