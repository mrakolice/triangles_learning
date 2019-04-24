
#include "service.h"

ScreenCreateResult create_screen(int width, int height){
	ScreenCreateResult screen_create_result;
	
	screen_create_result.result.width = width;
	screen_create_result.result.height = height;

	if (height < 0){
		screen_create_result.error_code = ERROR_CODE_NEGATIVE_HEIGHT;
	}
	if (width < 0) {
		screen_create_result.error_code = ERROR_CODE_NEGATIVE_WIDTH;
	}

	return screen_create_result;
}