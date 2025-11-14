// Swarangi Pathak 25070521079
#include <stdio.h>

int main() {
	int x, y, num;

	// Input the values of x, y, and num
	printf("lower bound(x): ");
	scanf("%d" , &x);


	printf("upper bound(y): ");
	scanf("%d" , &y);

	printf("number to check: ");
	scanf("%d" , &num);

	// Check if num is between x and y
	if(x <= num && y >= num){
		printf("%d is in between %d and %d\n" , num , x , y);

	}
	else{
		printf("%d is not in between %d and %d\n" , num , x , y);
	}



	return 0;
}
