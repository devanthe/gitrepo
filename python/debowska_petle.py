#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  debowska_petle.py
#  
 
def cw1():
    suma = 0
    liczba = int(input("Podaj liczbę: "))
    while suma < 75:
        suma += liczba
        print(suma)
        liczba = int(input("Podaj liczbę: "))
        
    print("Suma liczb: ", suma)

def cw2():
    ln = 0
    for i in range(1, 11):
        print(i, end=' ')

def cw3():
    lo = 0
    ogr = int(input("Wprowadź ograniczenie: "))
    while lo < ogr:
        lo = lo + 1
        kwadrat = lo
        kwadrat = kwadrat**2
        print(kwadrat)

def main(args):
    cw1()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
