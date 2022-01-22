# -*- coding: utf-8 -*-
"""
Created on Wed Jan 19 00:08:29 2022

@author: ashok
"""
balance = 2250
interestRate = .045
term = 120
x = 1
MonthlyInterest = 0


while x <= term:
    MonthlyInterest = ((balance * interestRate)/12)
    balance = balance + MonthlyInterest
    print("Month %d"%(x),"\t","Interest $%.2f" %(MonthlyInterest),"\t""Total Balance : $%.2f" %(balance))
    x = x + 1