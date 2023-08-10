// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() {
    float nums[5][1];
    float a = 999;
    float b = -999;
    int ix;
    
    for (ix = 1; ix < 6; ix++) {
        printf("DIGITE UM NUMERO: ");
        scanf("%f", &nums[ix][1]);
    }
    
    for (ix = 1; ix < 6; ix++) {
        if (nums[ix][1] < a) {
            a = nums[ix][1];
        }
        if (nums[ix][1] > b) {
            b = nums[ix][1];
        }
    }
    
    printf("\nmin: %i\nmax:%i", a, b);
    
}
