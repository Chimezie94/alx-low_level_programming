#ifndef MAIN_H
#define MAIN_H
unsigned int binary_to_uint(const char *f);
void print_binary(unsigned long int p);
unsigned int flip_bits(unsigned long int p, unsigned long int m);
int _atoi(const char *s);
int _putchar(char d);
int get_endianness(void);
int get_bit(unsigned long int p, unsigned int index);
int set_bit(unsigned long int *p, unsigned int index);
int clear_bit(unsigned long int *p, unsigned int index);
#endif
