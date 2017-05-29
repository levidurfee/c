/* Copyright (c) 2017 Levi Durfee <levi.durfee@protonmail.ch> */

#include <gmp.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>

int ld_factor(int n, int p) {
    int power_of_two = 2;
    int result = 1;
    for (int i = 1; i <= n; i *= 2) {
        if (n&i) {  /* If current bit in binary expansion is a 1 */
            result = (result * power_of_two) % p;
        }
        power_of_two = (power_of_two * power_of_two) % p;
    }
    return result;
}

int ld_power(unsigned long int exponent) {
    return 0;
}
int ld_random(unsigned long int seed, int bit_count) {
    char tmp;
    return tmp;
}
int ld_is_prime(char *str) {
    return 0;
}

int ld_reverse(char *str) {
    return 0;
}
int ld_get_binary(int n, char *str) {
    return 0;
}

int ld_mersenne() {
    return 0;
}

int ld_small_ll(int p) {
    return 0;
}
int ld_large_ll(unsigned long p) {
    return 0;
}

int get_science() {
    return 0;
}
