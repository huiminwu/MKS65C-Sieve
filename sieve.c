#include <stdio.h>
#include <math.h>

int sieve(int n) {
    char * nums = calloc(1.3 * n * log(n) + 10, sizeof(*nums));
    
    for(int i = 0; i < n; i++) {
        if(nums[i] == '1') {
            continue;
        } else {
            

}
