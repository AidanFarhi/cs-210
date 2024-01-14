#!/usr/bin/python3
import os

def remove_out_files(dirs_tuple):
    print(dirs_tuple)

for dirs_tuple in os.walk('./'):
    remove_out_files(dirs_tuple)
