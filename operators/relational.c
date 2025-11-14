// Pragati Shelke 25070521108
#include <stdio.h>

int main(){
	int inp1 , inp2;

	printf("Enter two numbers: ");
	scanf("%d %d" , &inp1,&inp2);

	printf("%d < %d: " , inp1 , inp2);
	printf("%s" ,inp1 < inp2 ? "True" : "False");
	printf("\n");

	printf("%d <= %d: ", inp1 , inp2);
	printf("%s" ,inp1 <= inp2 ? "True" : "False");
	printf("\n");

	printf("%d > %d: ", inp1 , inp2);
	printf("%s" ,inp1 > inp2 ? "True" : "False");
	printf("\n");

	printf("%d >= %d: ", inp1 , inp2);
	printf("%s" ,inp1 >= inp2 ? "True" : "False");
	printf("\n");

	printf("%d == %d: ", inp1 , inp2);
	printf("%s" ,inp1 == inp2 ? "True" : "False");
	printf("\n");

	printf("%d != %d: ", inp1 , inp2);
	printf("%s" ,inp1 != inp2 ? "True" : "False");
	printf("\n");

	return 0;

}
