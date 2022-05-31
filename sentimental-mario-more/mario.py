def main():
    height = 0
    # djdciuiuejnjsdkjsdk
    try:
        while height > 8 or height <= 0:
            height = int(input("Height: "))
    except ValueError:
        while height > 8 or height <= 0:
            height = int(input("Height: "))
    # jdedoijqwedk
    for i in range(1, height+1):
        # ednowej0e23eoe
        print(" " * (height-i), end='')
        # awkdo3jedcj
        print("#" * i, end='')
        # weijdowew
        print("  ", end='')
        # ijdwendewkkd
        print("#" * i)


if __name__ == '__main__':
    main()