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
    
    reader.read();

    data = reader.getData();

    for (long unsigned int i{}; i < reader.get_nr_rows(); i++)
    {
        std::cout << data[i][0] << std::flush;
        std::cout << data[i][1] << std::endl;

    }
        std::cout << reader.get_nr_rows() << ", " << std::flush;
        std::cout << reader.get_nr_cols() << std::endl; 
}