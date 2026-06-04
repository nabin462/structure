//Create a structure "employee" having name, address,salary, and age as member function.
//Display the name of the employee having address is dang.
#include<stdio.h>
struct employee{
	char name[20],address[20];
	int salary,age;
}e[3];
int main(){
	int i;
	for(i=0;i<3;i++)
	{
		printf("enter the name\n");
		scanf("%s",e[i].name);
		printf("enter the address\n");
		scanf("%s",e[i].address);
		printf("enter the salary\n");
		scanf("%d",&e[i].salary);
		printf("enter the age\n");
		scanf("%d",&e[i].age);
		
	}
	printf("Name\t Address\t Salary\t Age\n");
	for(i=0;i<3;i++)
	{
		if(strcmp(e[i].address,"dang")==0)
		{
			printf("%s\t %s\t %d\t %d\t",e[i].name,e[i].address,e[i].salary,e[i].age);
			
		}
	}
	return 0;
}
