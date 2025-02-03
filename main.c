#include <stdio.h>

int isPerfect(int num) {
    int sum = 1; 
    for (int n = 2; n * n <= num; n++) {
    if (num % n == 0) {
    sum += n;
    if (n != num / n) {
      sum += num / n;
   }

}
    }
    return sum == num;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPerfect(number)) {
        printf("Perfect Number");
    } else {
        printf("Not A Perfect Number");
  }

    return 0;
}
