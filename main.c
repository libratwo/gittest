#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

#define STRLEN	64

/** test git **/
int main(int argc, char *argv[])
{
	int a;
	char *b;

	b = malloc(sizeof(char)*STRLEN);
	if( b == NULL ) {
		fprintf(stderr, "[Error] %s\n", strerror(errno));
		return errno;
	}
	printf("test git!\n");
}
