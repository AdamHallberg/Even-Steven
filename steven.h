#ifndef STEVEN_H
#define STEVEN_H

#include <stdexcept>
#include <string>


class Person
{

    public:

        Person(std::string n = "unnamed", float e = 0);

        float get_debt      () const;
        float get_expence   () const;

        void update_debt    (float);
        void update_expence (float);

    private:

        std::string name{};
        float expence{};
        float debt{};
};

class Bank
{
    public:

        Bank(float t = 0);

        //void calculate_total();

        float get_expences();

    private:

        float tot_expences{};
};


#endif  //STEVEN_H