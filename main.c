#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "print_out.h"

int main(int argc, char *argv[]) {

	if ( argc != 3 ) {
		printf ("usage: %s iterations num1\n", argv[0] );
		exit(-1);
	}

	struct arg_struct args;
	struct data data;
	bzero(&data, sizeof(data));

	int iterations, value;

	args.arg1 	= atoi(argv[1]);
	iterations	= atoi(argv[1]);
	args.arg2 	= atoi(argv[2]);
	value 		= atoi(argv[2]);

	print_out((void *) &args);
	if(0) {
		print_all(iterations, &args);
	}

	write_all(iterations, value, &data);
	write_all(iterations, value, &data);

	return 0;
}
