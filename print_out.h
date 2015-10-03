#ifndef PRINTOUT_H
#define PRINTOUT_H

void print_out(void * arguments);

void print_all(int iterations, void *numbers);

void write_all(int iterations, int value, void *data);

struct calc {

	int sum;
}; 

struct data {

	struct calc *calc;
	int count;
};

struct arg_struct {

	int arg1;
	int arg2;
};

#endif
