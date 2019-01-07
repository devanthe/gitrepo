#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  zad.py

def fun():
    n = int(input("Podaj liczbę: "))
    i = 2
    if i*i<=n:
        if n%i == 0:
            print("Liczba jest złożona.")
        else:
            print("Liczba pierwsza.")
    exit()

            
            

def main(args):
    fun()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
