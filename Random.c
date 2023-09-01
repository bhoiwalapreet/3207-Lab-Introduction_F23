#include <stdlib.h>
#include "Random.h"


/*
randchar() is a character function
that returns a random character from ‘A’ – ‘Z’. The character is
used in the main program to generate a random 7 letter word
*/


char randchar() {
return 'A' + (rand() % 26); // Generates a random character from 'A' to 'Z'
}
