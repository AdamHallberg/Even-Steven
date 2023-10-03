#include "steven.h"

Person::Person(std::string n, int e)
:name{n}, expence{e}, debt{0}
//  ----------------------
{}

void Person::get_name()
{
    return name;
}

void Person::update_debt(int cost)
//  ----------------------
{
    debt -= cost;
}

int Person::get_debt() const
//  ----------------------
{
    return debt;
}

int Person::get_expence() const
//  ----------------------
{
    return expence;
}

void Person::update_expence(int cost)
//  ----------------------
{
expence += cost;
}

