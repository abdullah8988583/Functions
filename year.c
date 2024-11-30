#include <stdio.h>
void leapyear(int n){
	
	printf("Enter the year : ");
	scanf("%d",&n);
	
	if(n%4==0){
		printf("Leap year");
	}
	else {
		printf("Not a leap year");
	}
}
int main(){
	int year;
leapyear(year);	
	return 0;
}