# Task 4
# Write python code to parse header file and read all prototypes of function
# and insert it into excel sheet with unique ID start with IDx001

import re
from openpyxl import Workbook

# Function to extract function prototypes from a header file
def extract_function_prototypes(header_file):
    with open(header_file, 'r') as file:
        content = file.read()
    
    # Define a regular expression pattern to match function prototypes
    pattern = r'\w+\s+\w+\s*\([^)]*\)\s*;'
    
    # Find all function prototypes in the header file
    function_prototypes = re.findall(pattern, content)
    
    return function_prototypes

# Function to create an Excel sheet and insert function prototypes with unique IDs
def create_excel_sheet(function_prototypes):
    wb = Workbook()
    sheet = wb.active
    
    # Add headers to the Excel sheet
    sheet['A1'] = 'ID'
    sheet['B1'] = 'Function Prototype'
    
    # Initialize the ID counter
    id_counter = 1
    
    # Start inserting function prototypes with unique IDs
    for prototype in function_prototypes:
        unique_id = f'IDx{str(id_counter).zfill(3)}'
        sheet.append([unique_id, prototype])
        id_counter += 1
    
    # Save the Excel file
    wb.save('function_prototypes.xlsx')

if __name__ == "__main__":
    header_file = "header_file.h"  
    function_prototypes = extract_function_prototypes(header_file)
    
    if function_prototypes:
        create_excel_sheet(function_prototypes)
        print("Function prototypes extracted and saved to function_prototypes.xlsx")
    else:
        print("No function prototypes found in the header file.")