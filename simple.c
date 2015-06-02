#include <stdio.h>

struct arg_struct {
	int arg1;
	int arg2;
};

void *print_out(void *arguments){

	struct arg_struct *args; 
	args = (struct arg_struct*) arguments;
	printf("%d\n", args -> arg1);
	printf("%d\n", args -> arg2);
}

int main(int argc, char *argv[]){


	struct arg_struct args;

      args.arg1 = 10;
      args.arg2 = 20;

	print_out((void *) &args);

}

