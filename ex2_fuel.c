// Name: Sanyu Dorcus 
// Student Number:25/U/BIE/01420/PE

#include <stdio.h>

int main(void){

float distance_travelled;
float fuel_used;
float fuel_efficiency;

print("Enter distance covered (km)");
scanf("%f", &distance_travelled);

print("Enter fuel used (litres)");
scanf("%f", &fuel_used);

fuel_efficiency = (distance_travelled/fuel_used);
printf("Fuel efficiency:%.2fkm/l",fuel_efficiency);

    return 0;
}
