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

void write_all(int iterations, int value, void *data) {

	int i;

	for( i = 0; i < iterations; i++) {

		printf("Iteration: %d\n", i);
	}

}

