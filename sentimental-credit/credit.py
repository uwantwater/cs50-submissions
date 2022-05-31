import sys
def main():
    card_num = input("Number: ")
    while card_num.isnumeric() == False:
        card_num = input("Number: ")
    if checksum(card_num) == True:

    else:
        sys.exit("INVALID\n")

def checksum(number):
    


if __name__ == '__main__':
    main()