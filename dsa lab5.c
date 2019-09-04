
#include <stdio.h>
#include<string.h>
struct sit
{
	char name[20];
	char div[20];
char Prn[20];
	
};
int main()
{
	int i;
	struct sit a[5];
	for(i=0;i<5;i++)
	{
	
	printf("enter the name");
	scanf("%s",&a[5].name);
	printf("enter the div");
	scanf("%s",&a[5].div);
	printf("enter your prn");
	scanf("%s",&a[5].Prn);
	
    }
	 printf("\n");
	 for(i=0;i<3;i++)
{
	printf("your name is:%s\n",&a[5].name);
	printf("your division is:%s\n",&a[5].div);
	printf("your prn is:%s\n",&a[5].Prn);
	printf("\n");
}
}
