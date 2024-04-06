//Google kar diya !
#include <stdio.h>
int main() {
  int num, rev = 0, remainder, original;
    printf("Enter an integer: ");
    scanf("%d", &num);
    original = num;

    // reversed integer is stored in reversed variable
    while (num != 0) {
        remainder = num % 10;
        rev= rev * 10 + remainder;
        num /= 10;
    }

    // palindrome if orignal and reversed are equal
    if (original == rev)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

    return 0;
}