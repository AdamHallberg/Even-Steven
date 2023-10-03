#ifndef BANK_H
#define BANK_H

#include "Person.h"
#include <string>
#include <vector>

class Bank
{

    public:

        Bank();
    
        void    perfect_match       ();
        void    update_balance      ();
        void    write_payment_plan  ();
        void    add_person          (Person& p);

    private:

        float   total_balance{};

        std::vector<Person&> persons{};
        std::vector<Person&> debt_list{};
        std::vector<Person&> creditor_list{};

};


#endif //BANK_H