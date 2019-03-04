#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  palindromy.py
# sprawdzić czy palindromy
import os

def czy_palindrom(teksty):
    ile = len(tekst)
    for i in range(ile // 2):
        print(tekst[i])
        print(tekst[-i-1])
        if tekst[i] != tekst[-i-1]:
            return False
    return True

def czytaj_dane(plik):
    if not os.path.exists(plik):
        print("Plik niedostępny!")
        return False
    teksty = []
    with open(plik, "r") as f:
        for linia in f:
            teksty.append(linia.strip())
    return teksty

def main(args):
    teksty = czytaj_dane('dane01.txt')
    ile = 0
    print(teksty)
    # ~ if czy_palindrom(tekst):
        # ~ print("Tekst jest palindromem!")
    # ~ else:
        # ~ print("Tekst nie jest palindromem!")
        #ctrl e
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
