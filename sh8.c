#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main() {
	char str1[20],str2[20];
	int i,j,ch ;
	while(1) {
		printf("\n \n \t MENU \n");
		printf("\n1.length of string\n");
		printf("\n2.concatinate strings\n");
		printf("\n3.copy string in another string\n");
		printf("\n4.compare strings\n");
		printf("\n5.EXIT\n");
		printf("\n__________________________________\n");
		printf("\nenter your choice : \n");
		scanf("%d",&ch);
		
		switch(ch) {
			case 1:
				printf("\nenter string to find length : \n");
				scanf("%s",str1);
				i=strlen(str1);
				printf("\n string length is : %d \n",i);
				break;
			case 2:
				printf(" \n ENTER STRING 1 :\n");
				scanf("%s",str1);
				printf("\n ENTER STRING 2 : \n");
				scanf("%s",str2);
				strcat(str1,str2);
				printf("\nCONCATED STRING : %s \n ",str1);
				break;
			case 3:
				printf(" \n ENTER STRING 1 :\n");
				scanf("%s",str1);
				printf("\n ENTER STRING 2 : \n");
				scanf("%s",str2);
				printf("\nstrings before copying each other:%s %s \n",str1,str2);
				printf("\n...........we are copying str1 to str2.........\n");
				strcpy(str2,str1);
				printf("strings after copying each other :%s %s \n",str1,str2);
				break;
			case 4:
				printf(" \n ENTER STRING 1 :\n");
				scanf("%s",str1);
				printf("\n ENTER STRING 2 : \n");
				scanf("%s",str2);
				printf("\nstrings before copying each other:%s %s \n",str1,str2);
				j=strcmp(str1,str2);
				if (j==0) {
					printf("\nboth strings are equal\n");
				}
				else {
					printf("\nboth strings are not equal\n");
				}
				break;
			case 5:
				exit(0);
				break;
			default :
				printf("\n.......invalid choice re-enter program........\n");
				break;
			}
	}
}

				
				
				
				
				
				
				
				
				
				
				
				
				
				
