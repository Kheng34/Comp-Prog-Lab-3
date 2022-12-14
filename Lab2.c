#include <stdio.h>

int a, b;

int main() {
	printf("Please enter first number: ");
	scanf("%d", &a);
	printf("Please enter second number: ");
	scanf("%d", &b);
	if(a < b) {
		printf("Second is greater than the first");
	}
	else if(b < a) {
		printf("First is greater than the second");
	}
	else if(a == b) {
		printf("First is equal to second");
	}
	printf("\n");system("PAUSE");return 0;
}
