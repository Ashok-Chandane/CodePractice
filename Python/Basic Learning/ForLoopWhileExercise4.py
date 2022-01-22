# -*- coding: utf-8 -*-
"""
Created on Tue Jan 18 23:53:32 2022

@author: ashok
"""
name = ["Mark", "Fred", "Tom", "Craig", "Bobby", "Martha"]
loop =  0
for x in name:
    y = 0
    while(y < 5):
        print(x)
        y = y + 1
    loop = loop + 1
    print("Loop : %d"%loop)