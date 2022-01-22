# -*- coding: utf-8 -*-
"""
Created on Tue Jan 18 08:04:30 2022

@author: ashok
"""
Passport = True
Visa = True
VaccinationCertificate = True

if ((True == Passport) and (True == Visa) and (True == VaccinationCertificate) ):
    print("Welcome!! You are allowed to travel Internationally")
elif ((True == Passport) and (True == Visa) and (False == VaccinationCertificate) ):
    print("Please get vaccination certificate from authorized center")
elif ((False == Passport) or (False == Visa) ):
    {
         print("Unfortunatly, You can't travel due to incomplete Documentation")
    }
else :
    print("Default case will not arrive")