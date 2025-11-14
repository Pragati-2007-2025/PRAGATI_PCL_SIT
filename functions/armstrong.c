// Pragati Shelke 25070521108

#include <stdio.h>
#include <math.h>

// Function to check if a number is an Armstrong number
int is_armstrong(int n) {
	// int c = 0;
	int k = n;
	// while(k != 0 ){
	// 	c ++;
	// 	k /= 10;
	// }
	int c = (int)log10(n) + 1;

	int j = n;
	int s = 0;
	while(j != 0){
		// printf("%d %d\n", j%10 , pow(j%10,c));
		s = s + pow(j%10,c);
		j /=10;
	}

	return s == n ? 1 : 0;
}

int main() {
	int n;

	// Input from the user
	scanf("%d", &n);



	// Check if the number is an Armstrong number
	if (is_armstrong(n))
		printf("%d is Armstrong\n", n);
	else
		printf("%d is not Armstrong\n", n);

	return 0;
}
