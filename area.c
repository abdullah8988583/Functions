#include <stdio.h>
#include <math.h>
void area(float *a,float *b,float *c){
	float s;
	float area;
	s=(*a+*b+*c)/2;
	area=sqrt(s * (s - *a) * (s - *b) * (s - *c));
	printf("The area of trangle is %f", area);
}
int main (){
	float a;
	float b;
	float c;
	
	printf("Enter a  b c ");
	scanf("%f %f %f", &a,&b,&c);
	
	area(&a,&b,&c);
	return 0;
} 