#include <stdio.h>

int main(int argc, char **argv)
{
	FILE *ptr;
	ptr = fopen(argv[1], "w");

	int argcount;
	argcount=2;
	while(argcount<argc) {
		fprintf(ptr, "%s", argv[argcount]);
		argcount++;
	}
	return 0;
}
