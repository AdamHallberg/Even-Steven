#include "steven.h"

Person::Person(std::string n, float e)
:name{n}, expence{e}, debt{0}
//  ----------------------
{}

Bank::Bank(float tot)
:tot_expences{tot}
//  ----------------------
{}

float Bank::get_expences()
//  ---------------------
{
    return tot_expences;
}
void Person::update_debt(float cost)
//  ----------------------
{
    debt -= cost;
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

