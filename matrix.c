#include<stdio.h>
int main() {
	int a[2][2],b[2][2],res[2][2],i,j;
		printf("\n enter the elements of 1st matrix\n");
		for (i=0;i<2;i++) {
			for (j=0;j<2;j++) {
				scanf("%d",&a[i][j]);	
			}
		}
		printf("\n enter the elements of 2nd matrix \n");
		for (i=0;i<2;i++) {
			for (j=0;j<2;j++) {
				scanf("%d",&b[i][j]);
			}
		}
		
		printf("\n 1st matrix element are \n");
		for (i=0;i<2;i++) {
			for (j=0;j<2;j++) {
				printf("%d \t",a[i][j]);
			}
			printf("\n");
		}
		printf("\n 2nd matrix element are \n");
		for (i=0;i<2;i++) {
			for (j=0;j<2;j++) {
				printf("%d \t",b[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		printf("\nfinal matrix after addition\n");
		
		for (i=0;i<2;i++) {
			for (j=0;j<2;j++) {
				res[i][j]=a[i][j]+b[i][j];
				printf("%d \t",res[i][j]);
			}
			printf("\n");
		}
		
}
		
		
		
		
		
			
