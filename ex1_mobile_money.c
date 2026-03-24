//Name: SANYU DORCUS
//Student Number: 25/U/BIE/01420

#include <stdio.h>

int main(void){
float amount;
float trans;
float amount_deducted;

printf("Enter amount to send");
scanf("%f", & amount);

printf("Enter transaction fee");
scanf("%f", &trans );

transaction = amount * (trans/100.00);
amount_deducted = (amount + transaction);

printf("Transaction fee.%2f\n", transaction);
printf("Amount deducted.%2f", amount_deducted);

    return 0;
}
