#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

#define STRLEN	64

/** test git **/
int main(int argc, char *argv[])
{
	int a;
	char *pb;
	char b[64];

	pb = malloc(sizeof(char)*STRLEN);
	if( pb == NULL ) {
		fprintf(stderr, "[Error] %s\n", strerror(errno));
		return errno;
	}

	memset(b, 0x00, sizeof(b));

	printf("test git!\n");
}
