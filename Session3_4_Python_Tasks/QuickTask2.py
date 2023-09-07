# Quick Task2
# Write a python code to count the number of words in a text file

import sys

def count_words(file_path):
    try:
        with open(file_path, 'r') as myfile:
            text = myfile.read()
            words = text.split()
            word_count = len(words)
        return word_count
    except FileNotFoundError:
        return "File not found."
    except Exception as e:
        return f"An error occurred: {str(e)}"

while True:
    file_path = input("Enter The path of your file: ") 
    if file_path == "exit":
        sys.exit(0)  # Exit the script with a success status code (0)
    else:

        result = count_words(file_path)
        if isinstance(result, int):
            print(f"Number of words in this file: {result}")
        else:
            print(result)
