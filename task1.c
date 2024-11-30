#include <stdio.h>
void factorial(int n){
	int factorial=1;
	for (int i=1;i<n+1;i++){
		factorial=factorial*i;
	}
	printf("The factorial of number %d is: %d", n,factorial);
}
int main (){
	int number;
	printf("Enter the number : ");
	scanf("%d",&number);
	factorial(number);
	return 0;
}
