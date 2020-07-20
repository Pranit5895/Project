#!/usr/bin/python
#filename address-book.py
import pickle
import os
class Contact:
    def __init__(self,name,email,phone):
        self.name=name
        self.email=email
        self.phone=phone

     def __str__(self):
        return "Name:{0}\nEmail address:{1}\nPhone:{2}".format(self.name,self.email,self.phone)

    def change_name(self,name):
        self.name=name

    def change_email(self,email):
        self.email=email

    def change_phone(self,phone):
        self.phone=phone
