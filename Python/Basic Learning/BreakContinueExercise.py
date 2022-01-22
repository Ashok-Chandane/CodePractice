# -*- coding: utf-8 -*-
"""
Created on Wed Jan 19 00:02:40 2022

@author: ashok
"""
statement = "The quick brown fox jumped over the lazy dogs."

print("break statement usage : ")
# "break"
for letter in statement:
    if(letter == " "):
        break
    print(letter)

print("\n\n")
print("continue statement usage : ")
#"continue"
for letter in statement:
    if(letter == " "):
        continue
    print(letter)