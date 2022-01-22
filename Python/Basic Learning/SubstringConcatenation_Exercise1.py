# -*- coding: utf-8 -*-
"""
Created on Sun Jan 16 17:29:37 2022

@author: ashok
"""
name = "Mark Lassoff"
course = "Python for Beginners (2017)"

#Sub-Strings
print("name[0:3]):", name[0:4])

print("course[11:20]):", course[11:20])

#Concatenation

Total = name + " " + course

print(Total)

Partials = name[0:4] + " " + course[11:20]

print(Partials)


print("My name is %s and I am %d years old" % ("Ashok", 32))