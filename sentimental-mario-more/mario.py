def main():
    height = 0
    try:
        while height > 8 or height <= 0:
            height = int(input("Height: "))
    except ValueError:
        while height > 8 or height <= 0:
            height = int(input("Height: "))
    i = 1
    for i in range(height+2):
        print(" " * (height-i), end='')
        print("#" * i, end='')
        print("  ", end='')
        print("#" * i)

if __name__ == '__main__':
    main()