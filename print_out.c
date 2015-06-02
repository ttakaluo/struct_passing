#include <stdio.h>
#include "info.h"

void *print_out(void *arguments){

	struct arg_struct *args; 
	args = (struct arg_struct*) arguments;
	printf("%d\n", args -> arg1);
	printf("%d\n", args -> arg2);
	
}
