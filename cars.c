#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char car_brand[100];
	int production_year;
}car;


void read(car *t, int n){
	puts("Enter the car list:");
	for(int i=0;i<n;i++){
		printf("The car no. %d\n", i+1);
			printf("Enter the car brand: ");
		scanf("%s", &t[i].car_brand);
		printf("Enter the year of production: ");
		scanf("%d", &t[i].production_year);
	}

}

void write (car *t, int n){
	puts("---------------------------------");
	for(int i=0;i<n;i++){
		printf("The car brand: %s\n", t[i].car_brand);
		printf("The year of production: %d\n", t[i].production_year);

	}
	puts("---------------------------------");
}

car *select_cars(car *t, int n, int year, int *result_size){
	*result_size=0;
	for(int i=0;i<n;i++){
		if (t[i].production_year >= year){
			(*result_size)++;
		}
        }
    
car *result= (car *)malloc(*result_size*sizeof(car));

int j=0;

for (int i=0;i<n;i++ ){
if(t[i].production_year >= year){
result[j++]=t[i];
}
}

return result;
}

int main(){
int n, year;
printf("Enter a size of car list: ");
scanf("%d", &n);
printf("Enter the year of production: ");
scanf("%d", &year);
car *t=(car * )malloc(n*sizeof(car));
read(t,n);
int *result_size=(int *)malloc(1*sizeof(int));
car *result= select_cars(t,n, year, result_size);
puts("The cars exceeded the given year");
write(result, *result_size);

return 0;
}
