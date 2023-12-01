#!/bin/bash

# Task1
# Write bash script to create project based on Makefile

# Check if a project name is provided
if [ $# -eq 0 ]; then
    echo "Usage: $0 <project_name>"
    exit 1
fi

# Set project name
project_name=$1

# Set project directory
project_dir="./$project_name"

# Check if the project directory already exists
if [ -d "$project_dir" ]; then
    echo "Error: Project directory '$project_dir' already exists."
    exit 1
fi

# Create project directory
mkdir "$project_dir" || { echo "Error: Unable to create project directory."; exit 1; }

# Change to the project directory
cd "$project_dir" || { echo "Error: Unable to change to project directory."; exit 1; }

# Create source directory
mkdir src

# Create main source file
echo -e "#include <iostream>\n\nint main() {\n    std::cout << \"Hello, $project_name!\" << std::endl;\n    return 0;\n}" > src/main.cpp

# Create additional source file (example)
echo -e "#include <iostream>\n\nvoid printMessage() {\n    std::cout << \"Message from $project_name!\" << std::endl;\n}" > src/helper.cpp

# Create header file for additional source file (example)
echo -e "#ifndef HELPER_H\n#define HELPER_H\n\nvoid printMessage();\n\n#endif" > src/helper.h

# Create Makefile
echo -e "CC=g++\nCFLAGS=-I./src\n\n$project_name: src/main.o src/helper.o\n\t\$(CC) -o $project_name src/main.o src/helper.o\n\nsrc/main.o: src/main.cpp\n\t\$(CC) -c -o src/main.o src/main.cpp\n\nsrc/helper.o: src/helper.cpp\n\t\$(CC) -c -o src/helper.o src/helper.cpp\n\nclean:\n\trm -f $project_name src/main.o src/helper.o" > Makefile

echo "Project '$project_name' created successfully in '$project_dir'."
