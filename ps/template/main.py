import io
import os
import sys

readline = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline


def input():
    return readline().decode().rstrip()


def print(string):
    sys.stdout.write(f"{string}\n")
