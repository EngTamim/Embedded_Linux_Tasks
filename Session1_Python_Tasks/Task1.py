# Task1-1
# Write a python program to count the number 4 in a given list [1,4,6,7,4] 
list1 = [1,4,6,7,4]
message = "The Number 4 in the List {} has been repeated {} times"
print(message.format(list1,list1.count(4)))


# Task1-2
# Write a python program to test whether a passed letter is a vowel or not
vowel_character = ["A","a","E","e","I","i","O","o","U","u"]
reading_char = input("Enter a character: ")
if reading_char in vowel_character:
    message = "The '{}' is vowel character"
else:
    message = "The '{}' is nonvowel character"
print(message.format(reading_char))


# Task1-3
# Write a python program to access environment variables
import os
print("-----------------------------------------------------------------------------")
for item, value in os.environ.items():
    print("{}: {}".format(item, value))
print("-----------------------------------------------------------------------------")
pass