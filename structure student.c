//WAP to read the name,rollnumber and marks of the five students using array of structure.
//Display the name ,roll,mark of those whose mark greater than 50.
#include<stdio.h>
struct student{
	char name[20];
	int roll,mark;
}s[5];
int main()
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("enter the name \n ");
		scanf("%s",s[i].name);
		printf("enter the rollnumber\n");
		scanf("%d",&s[i].roll);
		printf("enter the mark\n");
		scanf("%d",&s[i].mark);
		
	}
	printf("Name \t Rollnumber\t Mark\n");
	for(i=0;i<5;i++)
	{
		if(s[i].mark>50)
		{
			printf("%s\t %d \t %d \n",s[i].name,s[i].roll,s[i].mark);
		}
	}
	return 0;
}
