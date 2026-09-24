#include <stdio.h>
#include <stdlib.h>
#include "stdlib.h"

int main()
{
	const char *data = "0.11.222.3333.44444\0";
	const char *string = "44444\0";
	int occurence = 1;
	int position = find_string_position(data, string, occurence);
	int i = 0;
	printf("find_string_position(%s, %s, %d) = %d\n", data, string, occurence, position);
	while(position+i < position+strlen(string))
	{
		printf("%c",*(data+((position+i)*sizeof(char))));
		i++;
	}
	return 0;
}
