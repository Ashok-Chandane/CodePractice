# -*- coding: utf-8 -*-
"""
Created on Tue Jan 18 23:34:11 2022

@author: ashok
"""
CourseName = "Python for Beginners"

for letter in CourseName:
    if(letter != " "):
        print(letter)

print("\n\n")

for letter in CourseName:
    if(letter == " "):
        print("<SPACE>")
    else :
        print(letter)