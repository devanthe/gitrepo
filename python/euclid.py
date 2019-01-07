#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  euclid.py

    
def nwdv1(a, b):
    while a != b: #a różne od b
        if a > b: #jeśli a jest większe of b
            a = a - b #odejmij od liczby większej liczbę mniejszą i zastąp
        else: 
            b = b - a
    #print a
    return a #zwróć a
    
def nwdv2(a, b): #wersja optymalna
    while a > 0:
        a = a % b
        b = b - a
    return b

def main(args):
    a = int(input('Podaj liczbę a: '))
    b = int(input('Podaj liczbę b: '))
    print(nwdv2(a, b))
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
