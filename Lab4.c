#include <stdio.h>

int midterm, final, eot;

int main() {
	printf("Please enter your Midterm Grade: ");
	scanf("%d", &midterm);
	printf("Please enter your Final Grade: ");
	scanf("%d", &final);
	eot = 0.4 * midterm + 0.6 * final;
	if(90 < eot && eot <= 100) {
		printf("Your EOT Grade: A");
	}
	else if(80 < eot && eot <= 90) {
		printf("Your EOT Grade: B");
	}
	else if(70 < eot && eot <= 80) {
		printf("Your EOT Grade: C");
	}
	else if(60 < eot && eot <= 70) {
		printf("Your EOT Grade: D");
	}
	else if(eot <= 60) {
		printf("Sorry, you couldn't pass");
	}
	printf("\n");system("PAUSE");return 0;
}
