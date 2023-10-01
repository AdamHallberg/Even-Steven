#include "steven.h"
#include "CSVReader.h"

void budget_test_function();

int main()
{
    budget_test_function();
    return 0;
}

void budget_test_function()
//  ---------------------
{
    std::string filename = "data.csv";
    CSVReader reader(filename);
    std::vector<std::vector<std::string>> data;
    std::vector<Person> person_list;
    
    reader.read();
    reader.stoi_on_col(1);


    data = reader.getData();

    reader.display_contents();

    std::cout << reader.col_sum(1) << std::endl; 
}