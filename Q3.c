
// [3] Check wether a number is palindrome or not.

#include <stdio.h>

int main() {
    int n, reversed = 0, remainder, original;

    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;

    // Reverse the integer
    while (n!= 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    // Check if the original and reversed numbers are equal 


    if(original == reversed) {
        printf("%d is pallindrome\n", original);
    }else {
        printf("%d is not pallindrome\n",original);
        
    return 0;
}

}
