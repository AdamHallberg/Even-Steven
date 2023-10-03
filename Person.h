#ifndef PERSON_H
#define PERSON_H

#include <stdexcept>
#include <string>

class Person
{

    public:

        Person(std::string n = "unnamed", float e = 0);

        float get_debt      () const;
        float get_expence   () const;
        std::string get_name      () const;

        void update_debt    (float);
        void update_expence (float);

    private:

        std::string name{};
        float expence{};
        float debt{};
};


#endif  //PERSON_H