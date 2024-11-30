#include <stdio.h>
void circular_shift(int *x,int *y,int *z){
	int temp1;
	int temp2;
	temp1=*x;
	temp2=*z;
	*z=*y;
	*y=temp1;
	*x=temp2;
	
	printf("After circular shift value of x: %d\n", *x);
	printf("After circular shift value of y: %d\n", *y);
	printf("After circular shift value of z: %d\n", *z);
}
int main (){
	int a;
	int b;
	int c;
	
	printf("Enter a : ");
	scanf("%d",&a);
	printf("Enter b : ");
	scanf("%d",&b);
	printf("Enter c : ");
	scanf("%d",&c);
	
	circular_shift(&a,&b,&c);
	
	return 0;
}