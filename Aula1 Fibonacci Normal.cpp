// FIBONACCI

#include <iostream>

int main () {
    long long int val1 = 0, val2 = 1, result = 0;

    printf(" %lld %lld", val1, val2);

    for (int i = 0; i < 100; i++) {
        result = val1 + val2;
        printf(" %lld ", result);
        val1 = val2;
        val2 = result;
    }
    
    return 0;
}