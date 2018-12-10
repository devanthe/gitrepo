#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  car.py
#  
#  zdefiniuj klasę samochów z nst atr i metodami
#  marka
#  model
#  rok produkcji
#  metoda wiek(), zwracająca wiek w latach

from datetime import date
from osoba_obj import Osoba

class Kierowca(Osoba):
    def __init__(self, imie, nazwisko, wiek):
        super().__init__(imie, nazwisko)
        self.kategoria = kategoria
    

class Samochod():
    """ klasa opisująca samochód """
    
    def __init__(self, marka, model, rocznik):
        self.marka = marka
        self.model = model
        self.rocznik = rok
        self.kierowca = kierowca
        
    def wiek(self, rocznik):
        dzis = date.today()
        self.wiek = dzis.year - self.rok

def main(args):
    s1 = Samochod('Fiat', 'Tipo', 2000)
    s2 = Samochod('Peugeot', '308', 2007)
    
    print(s1.model, s1.wiek())
    print(s2.model, s2.wiek())
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
