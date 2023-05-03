#include "catch.hpp"
#include "../cpp-tdd/Dollar.hpp"

namespace money_test {
	using money::Dollar;

	TEST_CASE("multiplication") {
		auto five = std::make_unique<Dollar>(5);
		five->times(2);
		REQUIRE(five->amount == 10);
	}
}
