#include "Person.h"

using namespace std;

Person::Person(std::string n, float e)
:name{n}, expence{e}, debt{0}
//  ----------------------
{}

string Person::get_name() const
{
    return name;
}

void Person::update_debt(float cost)
//  ----------------------
{
    debt += cost;
}

float Person::get_debt() const
//  ----------------------
{
    return debt;
}

float Person::get_expence() const
//  ----------------------
{
    return expence;
}

void Person::update_expence(float cost)
//  ----------------------
{
expence += cost;
}

