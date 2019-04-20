#ifndef ENTITIES_H
#define ENTITIES_H
	
	typedef struct screen {
		int width;
		int height;
	} Screen;

	typedef struct point {
		double x;
		double y;
	} Point;

	typedef struct edge {
		Point start_point;
		Point end_point;
	} Edge;

	typedef struct triangle {
		Edge[3] edges;
		Point[3] points;
	} Triangle;

#endif