#ifndef MAIN_H
#define MAIN_H
void _puts_recursion(char *s);
int _putchar(int c);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int helper_prime(int n, int i, int limit);
int helper(int n, int i);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
void free_grid(int **grid, int height);
int **alloc_grid(int width, int height);



#endif
