#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
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
	int tmp = 0;

	for( i = 0; i < (int) data->count; i++) {
		printf(" First iteration loop: %d\n", i);
	}
	data->count = iterations;
	data->calc = realloc(data->calc, sizeof(data->calc) * data->count); 
	bzero(data->calc, sizeof(data->calc) * data->count);

	for( i = 0; i < (int) data->count; i++) {
		printf("Second iteration loop: %d\n", i);
	}

	for( i = 0; i < (int) data->count; i++) {

		tmp += value;
		printf("value of tmp is: %d\n", tmp);
		data->calc[i].sum = tmp;
	}
	for( i = 0; i < (int) data->count; i++) {
		printf(" Third iteration loop: %d\n", data->calc[i].sum);
	}

	return 0;
}

