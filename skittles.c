#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

// everyone always forgets this
#include <math.h>
// rand() belongs to the math.h repo/package. Wont run without it, basically errors.
#include <time.h>
// time belongs to the time.h repo/package. Errors without this.

//Side note: You can change the max ammount by setting the following:
// 1). "int skittles = rand() % 1024;" <-- Changing 1024 to whatever number
// 2). "skittles < 1024" <-- Changing 1024 to the number above in Step 1

int main()
{
	srand(time(NULL));
	int skittles = rand() % 1024;

	printf("How many Skittles are in the jar!.\n");
	printf("It's less that 1024, how many are there?\n");

	while ( skittles < 1024 )
	{
		int n = GetInt();
		 if ( n < skittles )
		{
			printf("Thats's too little!\n");
		}
		else if ( n > skittles )
		{
			printf("That's alot!\n");
		}
		else
		{
			printf("That's right!\n");
			break;
		}
	}

}
