#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void) 
{
	char src[] = "The worst tings to eat before you sleep";
	char dst[100];
	
	strcpy(dst, src);
	
	printf("copied string : %s", dst);
}


