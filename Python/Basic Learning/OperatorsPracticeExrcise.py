# -*- coding: utf-8 -*-
"""
Created on Tue Jan 18 08:41:53 2022

@author: ashok
"""
subjectList = ["English", "Spanish", "Algebra", "Geography", "Theater"]
gpas = [3.12, 3.45, 2.99]

if ("Geography" == subjectList[0]):
    takingGeography = True
elif ("Geography" == subjectList[1]):
    takingGeography = True
elif ("Geography" == subjectList[2]):
    takingGeography = True
elif ("Geography" == subjectList[3]):
    takingGeography = True
elif ("Geography" == subjectList[4]):
    takingGeography = True
else:
    takingGeography = False

#Observe Difference in following print statements
print("takingGeography = %d" %(takingGeography))
print("takingGeography = " ,(takingGeography))

Average = (gpas[0] + gpas[1] + gpas[2])/ 3
if (Average> 3.33):
    print("Average is Greater than 3.33")
else :
    print("Average is Less than 3.33")