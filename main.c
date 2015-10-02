#include <stdio.h>
#include <stdlib.h>
#include "print_out.h"

int main(int argc, char *argv[]) {


	if ( argc != 3 ) {
		printf ("usage: %s iterations num1\n", argv[0] );
		exit(-1);
	}

	struct arg_struct args;

	args.arg1 = atoi(argv[1]);
	args.arg2 = atoi(argv[2]);

	print_out((void *) &args);

	return 0;
}
