#include <stdio.h>

//Kinda guessed on this.. 
int main(int argc, char *argv[]) 
{
	long long int isbn, temp;
	int rv, i;

	printf("ISBN number: \n");
	scanf("%lld", &isbn);
	
	temp = isbn;
	rv = 0;

	for( i = 10 ; i > 0 ; i-- )
	{
		rv += (temp % 10) * i; 	
		temp = temp / 10;
	}
	
	printf("%lld", isbn);

	if( rv % 11 == 0 )
	{
		printf("\nYes\n");
	}
	else 
		printf("\nNo\n");	
	
	return 0;
}
