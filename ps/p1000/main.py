import io
import os
import sys


# Fast I/O
def input():
    input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline
    return input().decode().rstrip()


def print(string):
    sys.stdout.write(f"{string}\n")


a, b = map(int, input().split())
print(a + b)
