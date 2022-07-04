#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct state
{
char capital[20];
char language[20];
int population;

}STATE;
void read(state *p);

int main(){
state state_1;
state state_2;
state *ptr_1,*ptr_2;

ptr_1=&state_1;
ptr_2=&state_2;

read(ptr_1);
printf("\n\n");
read(ptr_2);
printf("\n\n");

if(strcmp(ptr_1->language, ptr_2->language)==0)
{
printf("The same language is spoken in both countries: %s", ptr_1->language);}
else 
	printf("Different languages are spoken in countries");

if (ptr_1->population > ptr_2->population )
printf("\nthe population in %s is greater than in %s", ptr_1->capital, ptr_2->capital);	
else 
printf("\nthe more people live in %s", ptr_2->capital);

}

void read(state *p)
{
printf("Enter the name of Capital of State:\t");
scanf("%s", p->capital);
printf("Enter the population:\t");
scanf("%d", &(p->population));
printf("Enter the official language:\t");
		scanf("%s",p->language ); 
}
