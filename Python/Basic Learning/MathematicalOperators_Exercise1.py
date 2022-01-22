# -*- coding: utf-8 -*-
"""
Created on Sun Jan 16 18:48:34 2022

@author: ashok
"""
a = 2
b = 3
c = 4
d = 5
e = 6
f = 10
g = 100


#Exponential operations "**"
print(a**b) #a ^ b = 2^3 = 8

#Division operations "/"
print(a/b) #a/b = 2/3 = 0.66


#Floor division operations "//"
print(a//b) #a/b = 2/3 = 0

print(b/a)
print(b//a)

# Priority defined by PEMDAS rule, which stands for
# Parentheses, Exponents, Multiplication, Division, Addition, and Subtraction.
Result = (a + b) ** c * d / e + f + g

print(Result)