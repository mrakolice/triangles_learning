#include "entities.h"
#include "math.h"

int point_equal(Point point1, Point point2){
	return abs(start_point.x - end_point.x) <= EPSILON && abs(start_point.y - end_point.y) <= EPSILON;
}


ScreenCreateResult create_screen(int width, int height){
	ScreenCreateResult screen_create_result;
	
	if (height < 0){
		screen_create_result.error_code = ERROR_CODE_NEGATIVE_HEIGHT;
		return screen_create_result;
	}
	if (width < 0) {
		screen_create_result.error_code = ERROR_CODE_NEGATIVE_WIDTH;
		return screen_create_result;
	}
	if (height == 0) {
		screen_create_result.error_code = ERROR_CODE_ZERO_HEIGHT;
		return screen_create_result;
	}
	if (width == 0) {
		screen_create_result.error_code = ERROR_CODE_ZERO_WIDTH;
		return screen_create_result;
	}

	screen_create_result.result.width = width;
	screen_create_result.result.height = height;

	return screen_create_result;
}

// Создать точку
PointCreateResult create_point(double x, double y, Screen screen){
	PointCreateResult point_create_result;

	// точка за границами экрана (0;0) - (width; height)

	return point_create_result;
}

// Создать ребро
EdgeCreateResult create_edge(Point start_point, Point end_point){
	EdgeCreateResult edge_create_result;

	// Координаты точек совпадают (start_point.x == end_point.x) и тд
	if (point_equal(start_point, end_point)){
		edge_create_result.error_code = ERROR_CODE_START_POINT_EQUAL_END_POINT;

		return edge_create_result;
	}

	edge_create_result.result.start_point = start_point;
	edge_create_result.result.end_point = end_point;

	return edge_create_result;
}

// Создать треугольник
TriangleCreateResult create_triangle(Point points[3]){
	TriangleCreateResult triangle_create_result;

	// Координаты точек совпадают (start_point.x == end_point.x) и тд	
	for (int i=0,j=2; i < 3; j=i++){
		if (point_equal(point[i], point[j])){
			triangle_create_result.error_code = ERROR_CODE_POINTS_ARE_EQUAL;
			return triangle_create_result;
		}
	}

	triangle_create_result.points = points;
	// Создать ребра на точки

	return triangle_create_result;
}

// Создать треугольник
TriangleCreateResult create_triangle(Edge edges[3]){
	TriangleCreateResult triangle_create_result;

	// Координаты точек совпадают (start_point.x == end_point.x) и тд

	return triangle_create_result;	
}