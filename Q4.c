
// [4]armstrom number.

#include <stdio.h>


int main() {
    int n, arm = 0, remainder, original;

    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;

    while (n > 0) {
        remainder = n % 10;
        arm = remainder*remainder*remainder + arm ;
        n /= 10;
    }

    // Check if the original and arm numbers are equal

    if(original == arm) {
        printf("%d is armstrom\n", original);
    }else {
        printf("%d is not armstrom\n",original);
    }   
    return 0;
}

