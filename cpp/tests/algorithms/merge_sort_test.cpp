#include "algorithms/merge_sort.hpp"

#include <algorithm>
#include <string>

#include "catch2/catch_test_macros.hpp"

TEST_CASE("mergeSort", "[mergeSort]") {
	SECTION("int") {
		std::vector<int> vector{5, 7, 9, 2, 4, 6, 8, 10, 3, 1};

		mergeSort(vector);

		REQUIRE(vector == std::vector<int>{1, 2, 3, 4, 5, 6, 7, 8, 9, 10});
	}

	SECTION("std::string") {
		std::vector<std::string> vector{"orange", "banana", "apple", "pear"};

		mergeSort(vector);

		REQUIRE(
			vector ==
			std::vector<std::string>{"apple", "banana", "orange", "pear"}
		);
	}

	SECTION("char") {
		std::vector<char> vector{'s', 'a', 'l', '5', 'e', 'c',
								 '4', 'a', 't', 'r', '2'};

		mergeSort(vector);

		REQUIRE(
			vector ==
			std::vector<char>{
				'2', '4', '5', 'a', 'a', 'c', 'e', 'l', 'r', 's', 't'}
		);
	}

	SECTION("random") {
		std::vector<int> random;

		for (size_t i = 0; i < 100; i++) {
			random.push_back(rand() % 1000);
		}

		std::vector<int> vector{random};

		std::sort(random.begin(), random.end());
		mergeSort(vector);

		REQUIRE(vector == random);
	}
}
