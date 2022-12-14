#include <stdio.h>

int age;

int main() {
	printf("Please enter your age: ");
	scanf("%d", &age);
	if(age >= 6) {
		printf("You can enroll");
	}
	else {
		printf("You can't enroll");
	}
	printf("\n");system("PAUSE");return 0;
}
