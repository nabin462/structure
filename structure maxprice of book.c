//create a structure name  book has the member name,pages and price .Write a program
//read name of no. of pages and prices of five books using array structure.
//Display name,no.of pages and price of most expensive book.
#include<stdio.h>
struct book{
	char name[20];
	int page,price;
}b[5];
int main()
{
	int i ,j,temp;
	for(i=0;i<5;i++)
	{
		printf("enter the name of book\n");
		scanf("%s",b[i].name);
		printf("enter the pages\n");
		scanf("%d",&b[i].page);
		printf("enter the price\n");
		scanf("%d",&b[i].price);
		
		}
		printf("Name\t Price\t Pages\n");
		
		for(i=0;i<5;i++)
		{
			for(j=i+1;j<5;j++)
			{
				if(b[i].price<b[j].price)
				{
					temp=b[i].price;
					b[i].price=b[j].price;
					b[j].price=temp;
				}
			}
		}
		printf("%s\t %d\t %d\n",b[0].name,b[0].price,b[0].page);
		return 0;
}
