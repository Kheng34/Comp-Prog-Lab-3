#include <stdio.h>

int a;

int main() {
	while(a != 0) {
		printf("\nPlease enter an integer: ");
		scanf("%d", &a);
		if(a < 0) {
			printf("Integer is negative");
		}
		else if(a > 0) {
			printf("Integer is positive");
		}
	}
	printf("\n");system("PAUSE");return 0;
}
