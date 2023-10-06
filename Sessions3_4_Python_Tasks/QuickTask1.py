# Quick Task1
# Write a python code to count the number of lines in the text file

import sys

def count_lines_of_file(file_path):
    try:
        with open(file_path, 'r') as myfile:
            lines = myfile.readlines()
            line_count = len(lines)
        return line_count
    except FileNotFoundError:
        return "File not found."
    except Exception as e:
        return f"An error occurred: {str(e)}"

while True:
    file_path = input("Enter The path of your file: ") 
    if file_path == "exit":
        sys.exit(0)  # Exit the script with a success status code (0)
    else:

        result = count_lines_of_file(file_path)
        if isinstance(result, int):
            print(f"Number of lines in '{file_path}': {result}")
        else:
            print(result)
