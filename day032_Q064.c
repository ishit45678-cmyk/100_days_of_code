//Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main() {
    long long num;
    int count[10] = {0};  // to count digits 0–9
    int digit, max = 0, mostFrequent = 0;
    printf("Enter an integer: ");
    scanf("%lld", &num);
    // handle negative numbers
    if(num < 0)
        num = -num;
    // count each digit
    while(num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }
    // find the digit with maximum count
    for(int i = 0; i < 10; i++) {
        if(count[i] > max) {
            max = count[i];
            mostFrequent = i;
        }
    }
    printf("The digit that occurs the most is: %d\n", mostFrequent);
    printf("It occurs %d times.\n", max);
    return 0;
}