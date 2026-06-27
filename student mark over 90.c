//wap to print  student record  who get mark greater then 90 using structure
#include<stdio.h>
struct stud{
	char name[20];
	int id,mark;
}s[3];
int main(){
	int i;
	for(i=0;i<3;i++)
	{
		printf("enter the name\n");
		scanf("%s",s[i].name);
		printf("enter the id\n");
		scanf("%d",&s[i].id);
		printf("enter the mark\n");
		scanf("%d",&s[i].mark);
	}
	printf("The student detalis\n");
	printf("Name\t Id\t Mark\n");
	for(i=0;i<3;i++)
	{
		if(s[i].mark>90)
		{
			printf("%s\t %d\t %d\n",s[i].name,s[i].id,s[i].mark);
		}
	}
	return 0;
}

