#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Random.h" // Include the custom header


int main()
{
int a;


/* seed the randomizer */
srand((unsigned)time(NULL));


printf("Today's random word: ");
for (a = 0; a < 7; a++)
putchar(randchar()); // Using the randchar() function
putchar('\n');


return 0;
}
