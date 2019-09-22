#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  palindromy.py
import os


def czy_palindrom(tekst):
    ile = len(tekst)
    for i in range(ile // 2):
        if tekst[i] != tekst [-i-1]:
            return False
    return True


def czytaj_dane(plik):
    if not os.path.exists(plik):
        print('Plik niedostępny!')
        return False
    teksty = []
    with open(plik, "r") as f:
        for linia in f:
            teksty.append(linia.strip())
    return teksty


<<<<<<< HEAD
def palindrom(teksty, linia):
    for t in range(ileT): #dla t w randze ile tekstów
        if czy_palindrom(linia): #jeśli linia jest palindromem 
            palindrom.append() #dodaj palindrom do listy
            ileT =- 1
    return palindrom
    
    
def main(args):
    # tekst = input('Podaj tekst: ')
    teksty = czytaj_dane('dane01.txt')
    # ~ print(teksty)
    ile = 0
    palindrom = []
    ileT = len(teksty)
    linia = teksty[-1]
    
    
    print(len(palindrom))
  
=======
def main(args):
    # tekst = input('Podaj tekst: ')
    teksty = czytaj_dane('dane01.txt')
    print(teksty)
    ile = 0
    
>>>>>>> 95650a0439e67cd2e191d270bfec050d021c9222
    # ~if czy_palindrom(tekst):
        # ~print('To palindrom!')
    # ~else:
        # ~print('To nie jest palindrom!')
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
