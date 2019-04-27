#ifndef ENTITIES_H
#define ENTITIES_H	
	#define EPSILON = 0.00000000001

	typedef struct {
		int width;
		int height;
	} Screen;

	typedef struct {
		double x;
		double y;
	} Point;

	typedef struct {
		Point start_point;
		Point end_point;
	} Edge;

	typedef struct {
		Edge edges[3];
		Point points[3];
	} Triangle;


	typedef struct {
		Screen result;
		int error_code;
	} ScreenCreateResult;

	typedef struct {
		Screen result;
		int error_code;
	} PointCreateResult;

	typedef struct {
		Screen result;
		int error_code;
	} EdgeCreateResult;

	typedef struct {
		Screen result;
		int error_code;
	} TriangleCreateResult;

	enum screen_error_codes {
		ERROR_CODE_SUCCESS=0,
		ERROR_CODE_NEGATIVE_HEIGHT=1,
		ERROR_CODE_NEGATIVE_WIDTH =2,
		ERROR_CODE_ZERO_HEIGHT=3,
		ERROR_CODE_ZERO_WIDTH = 4,
		
		ERROR_CODE_START_POINT_EQUAL_END_POINT = 5,
		ERROR_CODE_POINTS_ARE_EQUAL = 6
	};

	// Создать экран
	ScreenCreateResult create_screen(int width, int height);

	// Создать точку
	PointCreateResult create_point(double x, double y, Screen screen);

	// Создать ребро
	EdgeCreateResult create_edge(Point start_point, Point end_point);

	// Создать треугольник
	TriangleCreateResult create_triangle(Point points[3]);

	// Создать треугольник
	TriangleCreateResult create_triangle(Edge edges[3]);

#endif