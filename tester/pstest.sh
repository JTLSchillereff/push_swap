#!/bin/bash

# Check if an argument was provided
if [ $# -ne 1 ]; then
    echo "Usage: $0 <number_of_integers>"
    echo "Example: $0 10"
    exit 1
fi

# Check if the argument is a positive integer
if ! [[ "$1" =~ ^[0-9]+$ ]]; then
    echo "Error: Please provide a positive integer"
    exit 1
fi

# Make sure random_generator exists and is executable
if [ ! -f ./random_generator ] || [ ! -x ./random_generator ]; then
    echo "Error: random_generator not found or not executable"
    echo "Please compile it first with: gcc -o random_generator random_generator.c"
    exit 1
fi

# Make sure push_swap exists and is executable
if [ ! -f ../push_swap ] || [ ! -x ../push_swap ]; then
    echo "Error: push_swap not found or not executable"
    exit 1
fi

# Generate random numbers and store them in ARG
ARG=$(./random_generator "$1")

# Display the generated numbers
# echo "Generated numbers: $ARG"

# Run push_swap with the generated numbers and count the lines
COUNT=$(../push_swap $ARG | wc -l)
echo "Number of operations: $COUNT"

# Optional: Show the ratio of operations to numbers
echo "Ratio (operations/numbers): $(echo "scale=2; $COUNT / $1" | bc)"