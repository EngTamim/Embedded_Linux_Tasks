# Quick Task3
# Write a python code to write a "list" to a file

color = ['Red', 'Green', 'White', 'Black', 'Pink', 'Yellow']

with open('TextFile.txt', 'w') as myfile:
    for item in color:
        myfile.write(str(item) + '\n')
