/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 09:35:02 by jleal             #+#    #+#             */
/*   Updated: 2025/04/20 14:25:26 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    unsigned char *ptr;

    if (size && count > (size_t)-1 / size)
        return (NULL);
    ptr = malloc(count * size);
    if (!ptr)
        return (NULL);
    ft_memset(ptr, 0, count * size);
    return (ptr);
}

// TESTING AREA//
/* static void test_ft_calloc(void) {
    printf(YELLOW "\n=== TESTING ft_calloc() ===\n\n" RESET);

    typedef struct {
        size_t nmemb;
        size_t size;
        const char *description;
    } test_case;

    test_case tests[] = {
        {5, sizeof(int), "Normal allocation (5 ints)"},
        {0, sizeof(int), "0 elements (should return non-NULL)"},
        {5, 0, "0 size (should return non-NULL)"},
        {0, 0, "0x0 allocation (implementation-defined)"},
        {1, 4096, "Large single element"},
        {SIZE_MAX/2, 2, "Potential overflow case"},
        {SIZE_MAX, 1, "Max elements"}
    };

    int passed = 0;
    int total = sizeof(tests)/sizeof(tests[0]);

    for (int i = 0; i < total; i++) {
        printf("Test %d: %-30s", i+1, tests[i].description);

        void *ft_ptr = ft_calloc(tests[i].nmemb, tests[i].size);
        void *sys_ptr = calloc(tests[i].nmemb, tests[i].size);

        // Check for matching NULLness
        if ((ft_ptr == NULL) != (sys_ptr == NULL)) {
            printf(RED "FAIL (NULL mismatch)\n" RESET);
            continue;
        }

        // If both succeeded, check memory
        if (ft_ptr && sys_ptr) {
            size_t total_size = tests[i].nmemb * tests[i].size;
            if (memcmp(ft_ptr, sys_ptr, total_size) != 0) {
                printf(RED "FAIL (memory not zeroed)\n" RESET);
                free(ft_ptr);
                free(sys_ptr);
                continue;
            }

            // Check alignment by testing as different types
            int alignment_ok = 1;
            if (tests[i].size >= sizeof(int)) {
                int *ft_int = (int *)ft_ptr;
                int *sys_int = (int *)sys_ptr;
                if (((uintptr_t)ft_int % _Alignof(int)) != 0)
                    alignment_ok = 0;
            }

            if (!alignment_ok) {
                printf(RED "FAIL (alignment)\n" RESET);
                free(ft_ptr);
                free(sys_ptr);
                continue;
            }
        }

        printf(GREEN "PASS\n" RESET);
        passed++;
        free(ft_ptr);
        free(sys_ptr);
    }

    printf("\nSummary: %d/%d " GREEN "PASSED" RESET "\n", passed, total);

    // Additional edge case: ENOMEM simulation
    printf("\nTesting ENOMEM behavior... ");
    void *huge = ft_calloc(SIZE_MAX, SIZE_MAX);
    if (huge == NULL) {
        printf(GREEN "PASS (correctly returned NULL)\n" RESET);
    } else {
        printf(RED "FAIL (should return NULL)\n" RESET);
        free(huge);
    }
}

int main(void)
{
    test_ft_calloc();
} */