#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void sieve(int n) {
    int size = 1.3 * n * log(n) + 10;
    int * nums = calloc(size, sizeof(*nums));
    int nthprime = 0;
    nums[0] = 1;
    nums[1] = 1;

    for(int i = 0; i < n; i++) {
        if(nums[i] == 1) {
            continue;
        } else {
            nums[i] = 0;
            nthprime += 1;
            int factor = i + i;
            printf("Runnigg sieve \n");
            printf("AT index %i, place has 1?, %i, place is less than size? %i\n", i, nums[factor] != 1, factor < size);
            while (nums[factor] != 1 && factor < size) {
                nums[factor] = 1;
                factor += i; 
            }
        }
    }
    
    for(int i = 0; i < n; i++) {
       printf("%i index's val: %i\n", i, nums[i]); 
    }
}
