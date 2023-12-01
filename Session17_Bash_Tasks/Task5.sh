#!/bin/bash

# Task5
# Write bash script to perform calculator operations

# Function to perform addition
add() {
    result=$(echo "$1 + $2" | bc)
    echo "Result: $result"
}

# Function to perform subtraction
subtract() {
    result=$(echo "$1 - $2" | bc)
    echo "Result: $result"
}

# Function to perform multiplication
multiply() {
    result=$(echo "$1 * $2" | bc)
    echo "Result: $result"
}

# Function to perform division
divide() {
    if [ $2 -eq 0 ]; then
        echo "Error: Division by zero is not allowed."
    else
        result=$(echo "scale=2; $1 / $2" | bc)
        echo "Result: $result"
    fi
}

# Main script
if [ $# -lt 3 ]; then
    echo "Usage: $0 <operation> <operand1> <operand2>"
    exit 1
fi

operation=$1
operand1=$2
operand2=$3

case $operation in
    "add")
        add $operand1 $operand2
        ;;
    "sub")
        subtract $operand1 $operand2
        ;;
    "mul")
        multiply $operand1 $operand2
        ;;
    "div")
        divide $operand1 $operand2
        ;;
    *)
        echo "Error: Invalid operation. Supported operations: add, subtract, multiply, divide."
        exit 1
        ;;
esac

exit 0
