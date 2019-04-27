#ifndef SERVICE_H
#define SERVICE_H
	#include "entities.h"

	// Создать экран
	ScreenCreateResult create_screen(int width, int height);

	// Провести все итерации
	Triangle* calculate_all(Screen screen, int iteration_count, double curve_coefficient);

	// Провести одну итерацию	
	Triangle* calculate_one_iteration(Triangle* triangles, double curve_coefficient);

#endif