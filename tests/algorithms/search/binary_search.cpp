#include "algorithms/search/binary_search.hpp"

#include <array>
#include <print>

auto main() -> int {
	auto array = std::array{1, 2, 3, 4, 5, 6};

	const auto* it = binary_search(array, 3);

	if (it != array.end()) std::println("found");
	else std::println("not found");
}