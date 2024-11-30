#include <stdio.h>
void power(int num,int pow){
	int result=1;
	for(int i=0;i<pow;i++){
		result=result*num;
	}
	printf("The answer is : %d", result);
}
int main(){
	int number;
	int index;
	printf("Enter the number : ");
	scanf("%d",&number);
	printf("Enter the power : ");
	scanf("%d", &index);
	
	power(number,index);
	return 0;
}