import io
import os
import sys

readline = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline


def input():
    return readline().decode().rstrip()


def print(string):
    sys.stdout.write(string)


n = int(input())
m = list(map(int, input()))

sum = 0
for i in range(n):
    sum += m[i]
print(f"{sum}\n")
