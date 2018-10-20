#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int sieve(int n) {
    int size = 1.3 * n * log(n) + 10;
    int * nums = calloc(size, sizeof(*nums));
    int nthprime = 0;
    nums[0] = 1;
    nums[1] = 1;

    for(int i = 0; i < size; i++) {
        if(nums[i] == 1) {
            continue;
        } else {
            nums[i] = 0;
            nthprime += 1;
            if(nthprime == n){
                return i;
            }
            int factor = i + i;
            while (factor < size) {
                if (nums[factor] != 1) {
                    nums[factor] = 1;
                }
                factor += i; 
            }
        }
    }
}
