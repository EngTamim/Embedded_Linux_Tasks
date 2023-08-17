# Task2
# Write a python program which accepts the radius of a circle from user and compute the area

import math
reading_r = input("Enter the radius of circle: ")
area = math.pi * float(reading_r)**2
print("Area of circle = {}".format(area))