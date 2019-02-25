#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  napisy.py

def pobierz_dane1():
    imie = input("Proszę podać imię: ")
    nazwisko = input("Proszę podać nazwisko: ")
    imie = imie.strip()
    nazwisko = nazwisko.strip()
    print("Witaj {} {}!".format(imie.capitalize(), nazwisko.capitalize()))
    print("Miło nam cię poznać!")
    imie == len(imie)
    nazwisko == len(nazwisko)
    if imie == nazwisko:
        print("Twoje imię i nazwisko mają tyle samo znaków!")
    elif imie > nazwisko:
        print("Twoje imię jest dłuższe od nazwiska!")
    else:
        print("Twoje imię jest krótsze of nazwiska!")
        
    if imie[-1] == 'a':
        print("Jesteś kobietą, gejem albo transgenderem!")
    else:
        print("Jesteś mężczyzną, gejem lub transgenderem!")
        
def pobierz_dane2():
    nazwa = input("Imię i nazwisko: ").strip()
    while nazwa.count(' ') != 1:
        nazwa = input("Imię i nazwisko: ").strip()
    samogloski = set(["a", "o", "u", "e", "i", "y", "ę", "ą"])
    inne = set([",", ".", "!", "?", " ", "\t"])
    ileSa = 0
    ileSp = 0
    for znak in nazwa:
        if znak in samogloski:
            ileSa += 1
        elif znak not in inne:
            ileSp += 1
    if ileSa > ileSp:
        print("Jest więcej samogłosek niż spółgłosek w twoim imieniu i nazwisku!")
    elif ileSa < ileSp:
        print("Jest więcej spółgłosek niż samogłosek w twoim imieniu i nazwisku!")
    else:
        print("Masz tyle samo spółgłosek i samogłosek w twoim imieniu i nazwisku!")

def pobierz_dane3():
    napis1 = input("Podaj tekst do zamiany: ").strip()
    napis2 = ''
    inne = set([",", ".", "!", "?", " ", "\t"])
    for znak in napis1:
        if znak not in inne and not znak.isdigit():
            if znak.islower():
                napis2 += znak.upper()
            else:
                napis2 += znak.lower()
        else:
            napis2 += znak
            
    print(napis2)
        

def main(args):
    pobierz_dane3()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
