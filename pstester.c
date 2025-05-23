/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pstester.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 13:33:03 by jleal             #+#    #+#             */
/*   Updated: 2025/05/23 15:20:57 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 1024

/* int main(int argc, char **argv)
{
    char buffer[BUFFER_SIZE + 1];
    int bytes_read;
    char *instructions = NULL;
    size_t total_len = 0;

    // Read all instructions from stdin
    while ((bytes_read = read(0, buffer, BUFFER_SIZE)) > 0)
    {
        buffer[bytes_read] = '\0';

        // Allocate memory for combined instructions
        char *temp = malloc(total_len + bytes_read + 1);
        if (!temp)
            return 1;

        if (instructions)
        {
            strcpy(temp, instructions);
            free(instructions);
        }
        else
        {
            temp[0] = '\0';
        }

        strcat(temp, buffer);
        instructions = temp;
        total_len += bytes_read;
    }

    // Now `instructions` contains all instructions from push_swap
    // You can now split by '\n' and simulate them on your stacks
    // For debugging:
    printf("Received instructions:\n%s\n", instructions);

    free(instructions);
    return 0;
} */
