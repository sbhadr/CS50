#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Vars
	int days;
	int pennies;
	
    do
    {
    	printf("Days in current Month: ");
    	days = GetInt();
    }
    
    // || signifies a "or"
    while (days < 28 || days > 31);

    do
    {
    	printf("Pennies on First Day: ");
    	pennies = GetInt();
    }
    
    //Checks less than or equal to zero
    while (pennies <= 0);

long long total = 0;
for (int i = 0; i < days; i++)
{
	total += pennies;
	pennies *= 2;
}
double dollar = (double)total / 100;
printf("You just made $%.2f\n", dollar);

}
