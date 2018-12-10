#!/usr/bin/env python
# -*- coding: utf-8 -*-

def push(stos, SP, rozmiar, dane):
    if SP < rozmiar:
        stos[SP] = dane
        SP += 1
    else:
        print("Stack overflow!")
    return SP
        
def pop(stos, SP, rozmiar):
    SP -= 1
    if SP < rozmiar:
        print(stos[SP])
    else:
        print("Stack overflow!")
    return SP
        
def main(args):
    #zadeklarowana pusta lista o zasięgu globalnym
    stos = []
    SP = 0 #stack pointer
    rozmiar = 5
    stos = [None] * rozmiar
    push(stos, SP, rozmiar, 2)
    SP = push(stos, SP, rozmiar, 2)
    print("Wskaźnik: ", SP)
    print(stos)
    SP = pop(stos, SP, rozmiar)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
