#ifndef SEARCH_ALG_H
#define SEARCH_ALG_H

#include <stdio.h>
#include <stddef.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);

/*helper*/
int advanced_binary_recursive(int *array, size_t left, size_t right, int value);

#endif /* SEARCH_ALG_H */
