def main():
    height = 0
    while height > 8 or height <= 0:
        height = int(input("Height: "))
        h = height / 2
    for i in range(height):
        print(" " * int(h-i), end='')
        print("#" * i, end='')
        print("  ", end='')
        print("#" * i, end='')
        print(" " * int(h-i))

if __name__ == '__main__':
    main()