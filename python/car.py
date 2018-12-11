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

class Kierowca(Osoba): #porządkuje kod
    
    __licznik = 0 #atrybut klasy współdzielony przez obiekty
    
    def __init__(self, imie, nazwisko, kategoria):
        super().__init__(imie, nazwisko)
        self.kategoria = kategoria #atrybuty obiektu
        Kierowca.__licznik += 1
        
    def __del__(self):
        Kierowca.__licznik -= 1
        
    @staticmethod #metoda statyczna
    def KierowcaLicz():
        return Kierowca.__licznik

class Samochod:
    
    def __init__(self, marka, model, rocznik):
        self.marka = marka
        self.model = model
        self.rok = rocznik

    def wiek(self):
        dzis = date.today()
        return dzis.year - self.rok

def main(args):
    s1 = Samochod('Fiat', 'Tipo', 2000)
    s2 = Samochod('Peugeot', '308', 2007)
    print(s1.model, s1.wiek())
    print(s2.model, s2.wiek())
    
    k1 = Kierowca('Adam', 'Małysz', 'B')
    print(k1.imie, k1.kategoria)
    print(k1.KierowcaLicz())
    k2 = Kierowca('Anna', 'Mewiek', 'CB')
    print(k2.imie, k2.kategoria)
    print(k2.KierowcaLicz())
    k3 = Kierowca('Alicja', 'Mot', 'C')
    print(k3.imie, k3.kategoria)
    print(k3.KierowcaLicz())
    print(k3.KierowcaLicz())
    print(k1.KierowcaLicz())
    print(k2.KierowcaLicz())
    print(k2.KierowcaLicz())
    del(k2) #aktywowane przez usunięcie
    print(k3.KierowcaLicz())
    del(k3)
    print(k1.KierowcaLicz())
    print(k1.KierowcaLicz())
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
