# -*- coding: utf-8 -*-
"""
Created on Tue Jan 18 08:24:00 2022

@author: ashok
"""

Passport = False
Visa = True
VaccinationCertificate = True

if ((True == Passport) and (True == Visa) and (True == VaccinationCertificate) ):
    print("Welcome!! You are allowed to travel Internationally")
elif ((True == Passport) and (True == Visa) and (False == VaccinationCertificate) ):
    print("Please get vaccination certificate from authorized center")
elif ((False == Passport) or (False == Visa) ):
    if(False == Visa) :
        print("You don't have valid VISA")
    else :
        print("You don't have valid Passport")
    print("Unfortunatly, You can't travel due to incomplete Documentation")
else :
    print("Default case will not arrive")