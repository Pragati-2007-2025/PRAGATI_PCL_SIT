// Swarangi Pathak 25070521079
#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int is_prime(int n) {
	if (n<=1) return 0;
	int k = n/2;
	int P = 1;
	for(int i=2;i<= sqrt(n); i++){
		if(n%i == 0){
			return 0;
		}
	}
	return 1;

}



int main() {
	int n;

	// Input from the user
	scanf("%d", &n);

	// Check if the number is prime
	if (is_prime(n))
		printf("%d is prime\n", n);
	else
		printf("%d is not prime\n", n);


	return 0;
}
