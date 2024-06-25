#include<stdio.h>

int main()
{
	#ifdef PRINT
		#if PRINT == y
			printf("THIS IS FROM EXAMPLE2.c FILE");
		#endif
	#endif
	return 0;
}
