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

int print_all(struct data *data) {

	int i;
/*
	for( i = 0; i < (int) data->count; i++) {
		printf("Iteration loop: %d\n", i);
	}*/

	for( i = 0; i < (int) data->count; i++) {
		printf("Iteration loop: %d\n", data->calc[i].sum);
	}
	return 0;
}

int write_all(int iterations, int value, struct data *data) {

	int i;
	int tmp = 0;

	data->count = iterations;
	data->calc = realloc(data->calc, sizeof(data->calc) * data->count); 
	bzero(data->calc, sizeof(data->calc) * data->count);

	for( i = 0; i < (int) data->count; i++) {
		tmp += value;
		printf("value of tmp is: %d\n", tmp);
		data->calc[i].sum = tmp;
	}

	return 0;
}

