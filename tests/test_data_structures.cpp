#include <catch2/catch.hpp>
#include <ph_data_structures/data_structures.hpp>



namespace ph::data_structures
{
    TEST_CASE ("stack")
    {
        auto s_0 = stack {1, 2, 3};
        REQUIRE (s_0.top() == 3);
    }
}
