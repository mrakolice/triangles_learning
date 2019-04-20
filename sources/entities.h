#ifndef ENTITIES_H
#define ENTITIES_H
	
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


	enum screen_error_codes {
		ERROR_CODE_SUCCESS=0,
		ERROR_CODE_NEGATIVE_HEIGHT=1
	};
#endif