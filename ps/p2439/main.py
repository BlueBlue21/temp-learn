import io
import os
import sys

readline = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline


def input():
    return readline().decode().rstrip()


def print(string):
    sys.stdout.write(string)


n = int(input())
for i in range(1, n + 1):
    for j in range(n - i):
        print(" ")
    for j in range(i):
        print("*")
    print("\n")
