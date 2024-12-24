#include <catch.hpp>
#include "ShellSort.h"


TEST_CASE("ShellSort 1") {
	int flag = 1;
	int array_size = 1;
	float array[1] = {};

	ShellSort(1, array);

	for (int i = 0; i < array_size - 1; i++) {
		if (array[i] > array[i + 1]) {
			flag = 0;
			break;
		}
	}

	REQUIRE(flag);
}


TEST_CASE("ShellSort 2") {
	int flag = 1;
	int array_size = 5;
	float array[] = { 6, 3.56, 5, 6.66, 12 };

	ShellSort(5, array);

	for (int i = 0; i < array_size - 1; i++) {
		if (array[i] > array[i + 1]) {
			flag = 0;
			break;
		}
	}
	REQUIRE(flag);
}

TEST_CASE("ShellSort 3") {
	int flag = 1;
	int array_size = 5;
	int array[] = { 6, 5, 4, 3, 1 };

	ShellSort(5, array);

	for (int i = 0; i < array_size - 1; i++) {
		if (array[i] > array[i + 1]) {
			flag = 0;
			break;
		}
	}
	REQUIRE(flag);
}
