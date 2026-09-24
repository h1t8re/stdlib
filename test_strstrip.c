#include "stdlib.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *data = strdup("0 1 2 3 4 5 6 7 8 9\0");
	char *data_striped = strstrip(strdup(data), " \0");
	printf("strstrip(\"%s\", \"%s\") = \"%s\"\n", strdup(data), " \0", data_striped);
	return 0;
}
