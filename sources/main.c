#include <stdio.h>
#include "main.h"

int main(){
	run_tests();

	int width, height, iteration_count;
	double curve_coefficient;

	width = input_int("Введите ширину экрана");
	height = input_int("Введите высоту экрана");
	iteration_count = input_int("Введите количество итераций");
	curve_coefficient = input_double("Введите коэффициент кривизны");

	ScreenCreateResult screen_create_result = create_screen(width, height);
	if (screen_create_result.error_code){
		output_screen_create_result_error_code(screen_create_result.error_code);
		return 0;
	}

	Triangle* triangles = calculate_all(screen_create_result.result, iteration_count, curve_coefficient);
	output_triangles(triangles);

	return 0;
}