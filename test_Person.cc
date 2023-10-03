#include "Person.h"
#include "Person.h"
#include "catch.hpp"

TEST_CASE("Person class")
{
    SECTION("empty")
    {
        Person p1 {};
        CHECK(p1.get_expence() == 0);
        CHECK(p1.get_debt() == 0);
        
        p1.update_debt(50);
        CHECK(p1.get_debt() == 50);
        p1.update_expence(50);
        CHECK(p1.get_expence() == 50);
    }
}