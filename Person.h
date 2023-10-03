#ifndef STEVEN_H
#define STEVEN_H

#include <stdexcept>
#include <string>

class Person
{

    public:

        Person(std::string n = "unnamed", int e = 0);

        int get_debt      () const;
        int get_expence   () const;
        int get_name      () const;

        void update_debt    (int);
        void update_expence (int);

    private:

        std::string name{};
        int expence{};
        int debt{};
};


#endif  //STEVEN_H