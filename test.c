#include <stdio.h>
#include "stdlib.h"

int main()
{
	char *str0 = strdup("0123456789\0");
	char *str1 = strdup("0123456789\0");
	int i = 0;
	while((((*(str0+(i*sizeof(char)))) == (*(str1+(i*sizeof(char))))) & (*(str0+(i*sizeof(char)))) != '\0'))
	{
		printf("i = %d\n", i);
		printf("str0 = %s at %p is %c\n", str0, (str0 + (i*sizeof(char))), *(str0 + (i*sizeof(char))));
		printf("str1 = %s at %p is %c\n", str1, (str1 + (i*sizeof(char))), *(str1 + (i*sizeof(char))));
		i = i +1;
	}
	printf("i = %d\n", i);
	printf("strlen(str0) = %d\n", strlen(str0));
	printf("strlen(str1) = %d\n", strlen(str1));
	return 0;
}
