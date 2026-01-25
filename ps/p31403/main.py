import io
import os
import sys

readline = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline


def input():
    return readline().decode().rstrip()


def print(string):
    sys.stdout.write(string)


def main():
    a = input()
    b = input()
    c = int(input())
    print(f"{int(a) + int(b) - c}\n")
    print(f"{int(a + b) - c}\n")


if __name__ == "__main__":
    main()
