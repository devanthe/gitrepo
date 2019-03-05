#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  tlumacz.py

def pokaz_menu():
    """Funkcja wyświetla działania dostępne dla użytkownia"""
    print("""
    Wybierz działanie:

    1. Lista słów
    2. Wprowadzanie / edycja słów
    3. Tłumaczenie
    4. Zmień język
    5. Koniec
""")

def listaSlow(dane):
    if not dane:
        print("Brak mi słów!")
        return
    i = 1
    print()
    for slowo, znaczenia in dane.items():
        print("{}. {}: {}".format(i, slowo, ",".join(dane[slowo])))
        i += 1
            
def pobierzZnaczenia(dane):
    znaczenia = input("Podaj znaczenie/a oddzielone przecinkami: \n")
    znaczenia = znaczenia.split(",")
    znaczenia = [z.strip() for z in znaczenia] #wyrażenie listowe tworzy listę w pętli do której dodajemy oczyszczone znaczenia
    return znaczenia

def pobierzDane(dane):
    slowo = input("Podaj słowo: ".strip().lower())
    if slowo in dane.keys():
        print("Słowo jest już w bazie!")
        print("{}: {}".format(slowo, ",".join(dane[slowo])))
        if input("Czy chcesz nadpisać znaczenie (t/n)?").lower() == t:
            dane[slowo] = pobierzZnaczenia()
    else:
        dane[slowo] = pobierzZnaczenia()
    
def main(args):
    dane = {'go': ['iść', 'jeździć'], 'see': ['zobaczyć', 'widzieć', 'oglądać']}
    operacja = 0
    while operacja != 5:
        pokaz_menu()
        operacja = int(input(""))
        if operacja == 1:
            listaSlow(dane)
        elif operacja == 2:
            pobierzZnaczenia(dane)
        elif operacja == 5:
            print("\n Do zobaczenia!")
        else:
            print("Błędny wybór!")
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
