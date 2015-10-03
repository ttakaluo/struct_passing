#ifndef PRINTOUT_H
#define PRINTOUT_H

struct calc {

	int sum;
}; 

struct data {

	struct calc *calc;
	size_t count;
};

struct arg_struct {

	int arg1;
	int arg2;
};

void print_out(void * arguments);

int print_all(struct data *data);

int write_all(int iterations, int value, struct data *data);

#endif
