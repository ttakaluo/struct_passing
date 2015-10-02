#include <stdio.h>
#include "print_out.h"

int main(int argc, char *argv[]) {

	struct arg_struct args;

	args.arg1 = 10;
	args.arg2 = 20;

	print_out((void *) &args);

	return 0;
}
