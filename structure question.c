//structure 
#include<stdio.h>
struct employe{
	char name[20];
	int salary;
}s[3];
int main(){
	int i;
	for(i=0;i<3;i++)
	{
		printf("enter your name\n");
		scanf("%s",s[i].name);
		printf("enter your salary\n");
		scanf("%d",&s[i].salary);
		
	}
	printf("Name\t Salary\n");
	for(i=0;i<3;i++){
		if(s[i].salary>5000)
		{
			printf("%s\t %d\n",s[i].name,s[i].salary);
		}
	}
	return 0;
}
