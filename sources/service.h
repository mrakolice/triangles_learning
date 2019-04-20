#ifndef SERVICE_H
#define SERVICE_H
	#include "entities.h"

	// Создать экран
	ScreenCreateResult create_screen(int width, int height);

	// Провести все итерации
	void calculate_all(int iteration_count, double curve_coefficient);

	// Провести одну итерацию	
	void calculate_one_iteration(double curve_coefficient);

#endif