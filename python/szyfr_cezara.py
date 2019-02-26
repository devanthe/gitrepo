#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  szyfr_cezara.py

def pobierz_klucz():
    try:
        klucz = int(input("Podaj klucz:\n"))
        return klucz % 26
    except ValueError:
        print("Błędny klucz! OwO")
        return 3
    
def szyfruj_1(tekst, klucz):
    inne = set([",", ".", "!", "?", " ", "\t"])
    szyfrogram = ''
    for znak in tekst:
        ascii = ord(znak)
        if znak = inne:
                    
        elif ascii + klucz > 122:
            znak = chr(ascii + klucz - 26)
        else:
            znak = chr(ascii + klucz)
        szyfrogram += znak 
    print("Szyfrogram:\n", szyfrogram)
    
def main(args):
    tekst = input("Podaj tekst: ").lower()
    klucz = pobierz_klucz()
    szyfruj_1(tekst, klucz)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
