#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int sieve(int n) {
    int size = 1.15 * n * log(n);
    int * nums = calloc(size, sizeof(*nums));
    int nthprime = 1;
    nums[2] = 0;
    int i;
    for(i = 3; i< size; i+=2) {
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
