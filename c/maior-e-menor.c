#include <stdio.h>
#include <math.h>

int main() {
    float nums[5][1], a, b;
    int ix;
    
    for (ix = 1; ix < 6; ix++) {
        printf("DIGITE UM NUMERO: ");
        scanf("%f", &nums[ix][1]);
    }

    a = nums[1][1];
    b = nums[1][1];
    
    for (ix = 2; ix < 6; ix++) {
        if (nums[ix][1] < a) {
            a = nums[ix][1];
        } if (nums[ix][1] > b) {
            b = nums[ix][1];
        }
    }
    
    printf("\nmin: %f\nmax:%f", a, b);
    
}
