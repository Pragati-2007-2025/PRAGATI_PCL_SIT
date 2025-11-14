// Swarangi Pathak 25070521079
#include <stdio.h>

int main(){
	int inp1 , inp2;
	printf("Enter numbers: ");
	scanf("%d %d" , &inp1 , &inp2);
	if(inp1 > 0  && inp2 > 0){
		printf("Both are positive\n");
	}
	else{
		printf("Both are not positive\n");
	}
	if(inp1 == 5 || inp2 == 5){
		printf("%d or %d = 5\n" , inp1 , inp2);
	}
	else{
		printf("%d,%d != 5\n" , inp1,inp2);
	}
	if(inp1 > 10){
		printf("%d > 10\n" , inp1);

	}
	else{
		printf("%d <= 10\n" , inp1);
	}
	return 0;

}
