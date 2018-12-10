#!/usr/bin/env python
# -*- coding: utf-8 -*-

class Osoba():
    """ Prosta klasa opisująca osobę """
    
    #metoda to funkcja podporządkowana klasie
    def __init__(self, imie, nazwisko, wiek=0):
        self.imie = imie
        self.nazwisko = nazwisko
        self.ustawPlec()
        self.wiek = 0
        
    def ustawPlec(self):
        if self.imie[-1] == 'a':
            self.plec = 'k'
        else:
            self.plec = 'm'


def main(args):
    o1 = Osoba('Andrzej', 'Sapkowski')
    o1.wiek = 666
    o2 = Osoba('Joanne', 'Rowling')
    o2.wiek = 37
    
    print(o1.imie, o1.nazwisko, o1.plec)
    print(o2.imie, o2.nazwisko, o2.plec)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
