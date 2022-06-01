import re

def main():
    inputText = input("Text: ")
    l = letters(inputText)
    w = words(inputText)
    s = sentences(inputText)
    # letters per hundred words
    L = l / w * 100
    # sentences per hundred words
    S = s / w * 100
    rawIndex = 0.0588 * L - 0.296 * S - 15.8
    # rounding index to the nearest integer
    index = round(rawIndex)
    # check if index is less than one or greater then 15 or between one and 16
    if index < 1:
        print("Before Grade 1")
    elif index >= 16:
        print("Grade 16+")
    else:
        print("Grade")

def letters(text):
    l = len(re.findall("[a-zA-Z]", text))
    return l


if __name__ == '__main__':
    main()