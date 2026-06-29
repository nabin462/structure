//structure
#include<stdio.h>
struct employee{
	char name[20];
	int s,a;
}e[5];
int main(){
	int i;
	for(i=0;i<5;i++)
	{
		printf("enter the name\n");
		scanf("%s",e[i].name);
		printf("enter your salary\n");
		scanf("%d",&e[i].s);
		printf("enter your age\n");
		scanf("%d",&e[i].a);
	}
	printf("enter the employee details\n");
	printf("Name\t Salary\t Age\n");
	for(i=0;i<5;i++){
		if(e[i].s>50000&&e[i].a>20){
		
		printf("%s\t %d\t %d\n",e[i].name,e[i].s,e[i].a);
	}
	}
	return 0;
}
