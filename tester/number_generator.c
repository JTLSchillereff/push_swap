/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_generator.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 18:25:21 by jleal             #+#    #+#             */
/*   Updated: 2025/05/23 18:39:53 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <limits.h>

// Function to check if a number is already in our array
bool is_duplicate(int *array, int size, int value) {
	for (int i = 0; i < size; i++) {
		if (array[i] == value) {
			return true;
		}
	}
	return false;
}

int main(int argc, char *argv[]) {
	// Check if the correct number of arguments is provided
	if (argc != 2) {
		fprintf(stderr, "Usage: %s <number_of_integers>\n", argv[0]);
		return 1;
	}

	// Parse the number of integers to generate
	int count = atoi(argv[1]);
	if (count <= 0) {
		fprintf(stderr, "Error: Please provide a positive integer\n");
		return 1;
	}

	// Seed the random number generator with current time
	srand(time(NULL));

	// Allocate memory for the array of unique numbers
	int *numbers = malloc(count * sizeof(int));
	if (!numbers) {
		fprintf(stderr, "Error: Memory allocation failed\n");
		return 1;
	}

	// Generate unique random numbers
	int generated = 0;
	while (generated < count) {
		// Generate a random number that can be positive or negative
		int random_value;
		
		// Using rand() % (MAX - MIN + 1) + MIN
		// For negative numbers, we'll use a wider range
		// INT_MAX / 2 gives us a good range for both positive and negative
		random_value = rand() % INT_MAX - (INT_MAX / 2);
		
		// Check if this number is already in our array
		if (!is_duplicate(numbers, generated, random_value)) {
			numbers[generated] = random_value;
			generated++;
		}
	}

	//opening commas
	//printf("\"");
	
	// Output the numbers
	for (int i = 0; i < count; i++) {
		printf("%d", numbers[i]);
		// Add space after each number except the last one
		if (i < count - 1) {
			printf(" ");
		}
	}
	
	// Add closing commas
	//printf("\"");

	// Free allocated memory
	free(numbers);

	return 0;
}