#include <stdio.h>
#include "print_out.h"

void print_out(void *arguments) {

	static struct arg_struct *args; 
	args = (struct arg_struct*) arguments;
	printf("%d\n", args -> arg1);
	printf("%d\n", args -> arg2);
}

void print_all(int iterations, void *numbers) {
	
}

int write_all(int iterations, int value, struct data *data) {

	int i;

	for( i = 0; i < data->count; i++) {
		printf(" First iteration loop: %d\n", i);
	}

	data->count = iterations;

	for( i = 0; i < data->count; i++) {
		printf("Second iteration loop: %d\n", i);
	}

	return 0;
}

