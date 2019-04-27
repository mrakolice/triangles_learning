#include <stdio.h>

#include "input.h"

int input_int(char* message){
	printf("%s\n", message);

	int result = 0;

	scanf("%d", &result);

	return result;
}

double input_double(char* message){
	printf("%s\n", message);

	double result;

	scanf("%lf", &result);

	return result;
}