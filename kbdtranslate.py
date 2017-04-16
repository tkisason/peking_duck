#!/usr/bin/python

import sys
import keymaps

def inv_lookup(dct,item):
    return [key for key,value in dct.items() if value == item][0]

def translate(infilename,origin=keymaps.en,dest=keymaps.hr):
    infile = open(infilename).read()
    for char in infile:
        try:
            dest_key = inv_lookup(dest,char)
            sys.stdout.write(origin[dest_key])
            sys.stdout.flush()
        except:
            sys.stdout.write(char)
            sys.stdout.flush()

if __name__ == '__main__':
    if len(sys.argv) <= 1:
        print 'This script translates a set of commands from one keymap'
        print 'to another keymap. Currently supports only en->hr'
        print '[i] usage: ' + sys.argv[0] + 'input_script'
    else:
        translate(sys.argv[1])
