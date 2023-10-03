#include "Bank.h"

using namespace std;


Bank::Bank()
:total_balance{}, persons{}, debt_list{}, creditor_list{}
{}

void Bank::perfect_match()
{

}

void Bank::update_balance()
{
    float average_expense{};

    for(Person& i : persons)
    {
        total_balance += i.get_expence();
    }
    
    average_expense = total_balance/persons.size();

    for(Person& i : persons)
    {
        if(i.get_expence() < average_expense)
        {
            debt_list.push_back(i);
        }
        else if(i.get_expence() > average_expense)
        {
            creditor_list.push_back(i);
        }
    }

}

void Bank::write_payment_plan()
{

}

void Bank::add_person(Person& p)
{
    persons.pushback(p);
}
