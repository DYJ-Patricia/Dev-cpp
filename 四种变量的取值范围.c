#include <stdio.h>
#include <limits.h>
#include <float.h>
int main () {
	printf("Signed char range : %d to %d\n", SCHAR_MIN , SCHAR_MAX);
	printf("Unsigned char range : 0 to %u\n", UCHAR_MAX);
	
//	printf("Signed short range : %d to %d\n", SHORT_MIN , SHORT_MAX);
//	printf("Unsigned short range : 0 to %u\n", USHORT_MAX);
	
	printf("Signed int range : %d to %d\n", INT_MIN , INT_MAX);
	printf("Unsigned int range : 0 to %u\n", UINT_MAX);
	
	printf("Signed long range : %d to %d\n", LONG_MIN , LONG_MAX);
	printf("Unsigned long range : 0 to %u\n", ULONG_MAX);
	
	printf("Float range : %e to %e\n", FLT_MIN , FLT_MAX);
	printf("Double range : %e to %e\n", DBL_MIN , DBL_MAX);
	
	return 0;	
}

