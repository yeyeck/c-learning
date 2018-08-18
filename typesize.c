# include <stdio.h>

int main()
{
	printf("Type int has a size of %d bytes.\n", sizeof(int));
	printf("Type char has a size of %d bytes.\n", sizeof(char));
	printf("Type short has a size of %d bytes.\n", sizeof(short));
	printf("Type long has a size of %d bytes.\n", sizeof(long));
	printf("Type long long has a size of %d bytes.\n", sizeof(long long));
	printf("Type double has a size of %d bytes.\n", sizeof(double));
	printf("Type long double has a size of %d bytes.\n", sizeof(long double));
	
	return 0;
	
 } 
 /*
Type int has a size of 4 bytes.
Type char has a size of 1 bytes.
Type short has a size of 2 bytes.
Type long has a size of 4 bytes.
Type long long has a size of 8 bytes.
Type double has a size of 8 bytes.
Type long double has a size of 16 bytes.
 */
