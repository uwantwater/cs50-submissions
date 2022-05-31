def main():
    height = 0
    while height > 8 or height <= 0:
        height = int(input("Height: "))
    for i in range(height):
        print(" " * height)

if __name__ == '__main__':
    main()