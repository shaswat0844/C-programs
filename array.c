#include<stdio.h>

struct student {
	int roll;
	char name[10];
	int total;
	float per;
	int m1,m2,m3;
};

int main() {
	int i,n;
	printf("\n___________std_info____________\n");
	printf("\nenter no. of records : ");
	scanf("%d",&n);
	
	struct student starr[n];
	for(i=0;i<n;i++) {
		printf("\nenter roll no. of student :");
		scanf("%d",&starr[i].roll);
		printf("\nenter marks of three subjects : ");
		scanf("%d %d %d",&starr[i].m1,&starr[i].m2,&starr[i].m3);
		printf("\nenter name of student : ");
		scanf("%s",starr[i].name);
		starr[i].total=(starr[i].m1 + starr[i].m2 + starr[i].m3);
		starr[i].per=starr[i].total/3;
	}
	
	printf("\n roll no. |\tname|\tmarks|\ttotal|\tper| \tresult |");
	
	
	for(i=0;i<n;i++) {
		printf("\n %d",starr[i].roll);
		printf("\t");
		printf("%s",starr[i].name);
		printf("\t");
		printf("\t[%d,%d,%d]",starr[i].m1,starr[i].m2,starr[i].m3);
		printf("\t\t%d",starr[i].total);
		printf("\t%f",starr[i].per);
		
		if (starr[i].per < 40) {
    		printf("\tFail");
		}
		else if (starr[i].per >= 40 && starr[i].per < 60) {
    		printf("\tPass");
		}	
		else if (starr[i].per >= 60 && starr[i].per < 80) {
    		printf("\t2nd class");
		}
		else if (starr[i].per >= 80 && starr[i].per < 90) {
		    printf("\t1st class");
		}
		else if (starr[i].per >= 90 && starr[i].per <= 100) {
		    printf("\ttopper");
		}
		else {
		    printf("\tinvalid percentage");
		}
			}
		
	return 0;
}
		
		
		
		
		
		
		
		
		
