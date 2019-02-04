#!/usr/bin/env python
# -*- coding: utf-8 -*-
import turtle 


def main(args):
    
    turtle.setup(800, 600)
    for i in range(4):
        turtle.forward(200)
        turtle.left(90)
    return 0

if __name__ == '__main__':
    import sys
sys.exit(main(sys.argv))
