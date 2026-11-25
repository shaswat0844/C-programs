#include<stdio.h>
int main() {
	float s1,s2,s3,s4,s5,x;
		printf("\n enter all 5 subjects : ");
		printf("\n 1st->");
		scanf("%f",&s1);
		printf("\n 2st->");
		scanf("%f",&s2);
		printf("\n 3st->");
		scanf("%f",&s3);
		printf("\n 4st->");
		scanf("%f",&s4);
		printf("\n 5st->");
		scanf("%f",&s5);
		
		x=(s1+s2+s3+s4+s5)/5;
		printf("your percentage is : %f",x);
		
		if (x>80 && x<=100) {
			printf("\nyou comes under 1st class");
		}
		else if (x>40 && x<=80) {
			printf("\nYOU COMES UNDER 2ND CLASS");
		}
		else if (x>=0 && x<=40) {
			printf("\nyou are fail");
		}
		else {
			printf("\ninvalid marks enterd");
		}
		return 0;
}
			
