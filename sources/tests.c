#include <stdio.h>

#include "tests.h"

void test_start(char* test_name){
	printf("TEST %s STARTED\n", test_name);
}

void test_end(char* test_name){
	printf("TEST %s ENDED\n", test_name);
}

void assert_equal(int fact, int expected, char* comment){
	if (fact == expected){
		printf("Assert %s PASSED\n", comment);
	}
	else{
		printf("Assert %s FAILED\n", comment);
	}
}
void assert_greater(int fact, int expected, char* comment) {
	if (fact > expected) {
		printf("Assert %s PASSED\n", comment);
	}
	else {
		printf("Assert %s FAILED\n", comment);
	}
}

void assert_greater_or_equal(int fact, int expected, char* comment) {
	if (fact >= expected) {
		printf("Assert %s PASSED\n", comment);
	}
	else {
		printf("Assert %s FAILED\n", comment);
	}
}
void assert_lesser(int fact, int expected, char* comment) {
	if (fact < expected) {
		printf("Assert %s PASSED\n", comment);
	}
	else {
		printf("Assert %s FAILED\n", comment);
	}
}

void assert_lesser_or_equal(int fact, int expected, char* comment) {
	if (fact <= expected) {
		printf("Assert %s PASSED\n", comment);
	}
	else {
		printf("Assert %s FAILED\n", comment);
	}
}

void assert_not_equal(int fact, int expected, char* comment) {
	if (fact != expected) {
		printf("Assert %s PASSED\n", comment);
	}
	else {
		printf("Assert %s FAILED\n", comment);
	}
}

void should_print_zero(){
	int a = 0;
	printf("%d\n", a);
}

void should_return_screen(){
	test_start("should_return_screen");

	int width = 90;
	int height = 100;

	ScreenCreateResult screen_create_result = create_screen(width,height);

	assert_equal(screen_create_result.result.width, width, "screen width");
	assert_equal(screen_create_result.result.height, height, "screen height");
	assert_equal(screen_create_result.error_code, ERROR_CODE_SUCCESS, "error code");

	test_end("should_return_screen");
}

void should_return_error_code_negative_height_if_send_negative_height(){
	test_start("should_return_error_code_negative_height_if_send_negative_height");

	int width = 90;
	int height = -500;

	ScreenCreateResult screen_create_result = create_screen(width,height);

	assert_equal(screen_create_result.result.width, width, "screen width");
	assert_equal(screen_create_result.result.height, height, "screen height");
	assert_equal(screen_create_result.error_code, ERROR_CODE_NEGATIVE_HEIGHT, "error_code");

	test_end("should_return_error_code_negative_height_if_send_negative_height");
}

void run_tests(){
	should_print_zero();

	should_return_screen();
	should_return_error_code_negative_height_if_send_negative_height();
}

// Ввести слишком маленькие или слишком большие числа, дробные, отрицательные,
