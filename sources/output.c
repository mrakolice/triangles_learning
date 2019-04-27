#include <stdio.h>

#include "output.h"

void output_triangles(Triangle* triangle){
	// Бежим по каждому треугольнику и выводим его

	printf("output triangles\n");
}


void output_screen_create_result_error_code(int error_code){
	char * message;
	switch(error_code){
		case ERROR_CODE_SUCCESS:
			message = "Все в порядке";
			break;

		case ERROR_CODE_NEGATIVE_HEIGHT:
			message = "Вы ввели отрицательную высоту";
			break;

		case ERROR_CODE_NEGATIVE_WIDTH:
			message = "Вы ввели отрицательную ширину";
			break;

		case ERROR_CODE_ZERO_HEIGHT:
			message = "Вы ввели нулевую высоту";
			break;

		case ERROR_CODE_ZERO_WIDTH:
			message = "Вы ввели нулевую ширину";
			break;
	}

	printf("%s\n", message);
}