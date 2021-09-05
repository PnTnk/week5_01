#include<stdio.h>
int factorial(int);
int main() {
	int num;
	printf("Enter number :");
	scanf_s("%d", &num);
	int a = factorial(num);
	printf("Factorial 0f %d is %d", num,a);
	return 0;
}
int factorial(int x) {
	unsigned long b = 1;
	while (x > 0) {
		b *= x;
		x -= 1;
	}
	return b;
}