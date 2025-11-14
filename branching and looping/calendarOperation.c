// Swarangi Pathak 25070521079
#include <stdio.h>


void main(){
	int n;
	printf("Enter month number: ");
	scanf("%d" , &n);
	if(n > 12 || n < 1){
		printf("Invalid month number\n");
		return;
	}
	if(n == 2) {
		printf("28 or 29 days\n");
		return;

	}
	if(n > 7) {
		if(n % 2 == 0){
		printf("31 days\n");
		return;
	}
	else{
		printf("30 days\n");
	}}
	else{
	if(n % 2 == 0){
		printf("30 days\n");
		return;
	}
	else{
		printf("31 days\n");
	}
	}



}
