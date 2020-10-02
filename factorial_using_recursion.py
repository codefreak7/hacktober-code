# -*- coding: utf-8 -*-
"""factorial_using_recursion.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1E3tHhP5VK24y7nbeZAudhFn4YN_wgIM-
"""

# Factorial of a number using recursion
#recursion funtion
def recur_factorial(n):
   if n == 1:
       return n
   else:
       return n*recur_factorial(n-1)

num=input()

# check if the number is negative
if num < 0:
   print("Sorry, factorial does not exist for negative numbers")
elif num == 0:
   print("The factorial of 0 is 1")
else:
   print("The factorial of", num, "is", recur_factorial(num))