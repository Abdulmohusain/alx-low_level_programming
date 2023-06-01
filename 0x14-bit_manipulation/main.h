#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>

unsigned long int *conv_bin_into_arr(unsigned long int n);
void conv_bin(unsigned long int n, unsigned long int a, unsigned long int m);
int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);
#endif
