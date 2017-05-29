/* Copyright (c) 2017 Levi Durfee <levi.durfee@protonmail.ch> */

#ifndef LD_P
#define LD_P 1

/* Constants */

#define LD_P_MAJOR      "0"
#define LD_P_MINOR      "1"
#define LD_P_PATCH      "0"
#define LD_P_BUILD      "0.1.0"

/* Common functions */
/* Functions will accept parameters they need and a pointer to */
/* use to get data back out of the function. Don't return a    */
/* char pointer, that will cause undefined behavior. Need to   */
/* update the parameters of the functions.                     */

int ld_factor     (int n, int p);
int ld_power      (unsigned long int exponent);
int ld_random     (unsigned long int seed, int bit_count);
int ld_is_prime   (char *str);

int ld_reverse    (char *str);
int ld_get_binary (int n, char *str);

int ld_mersenne   ();

int ld_small_ll   (int p);
int ld_large_ll   (unsigned long p);

int ld_get_science();

#endif
