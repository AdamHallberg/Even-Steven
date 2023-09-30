#include "CSVReader.h"

CSVReader::CSVReader(const std::string& file, char delimit)
: delimiter(delimit), nr_rows{0}, nr_cols{0}, filename(file)
{}

long unsigned int CSVReader::get_nr_rows()
//  ---------------------
{
    return nr_rows;
}

long unsigned int CSVReader::get_nr_cols()
//  ---------------------
{
    return nr_cols;
}

void CSVReader::fix_data()
//  ----------------------
{
    for (long unsigned int i{}; i < nr_rows; i++)
    {
        std::cout << data[i][0] << std::flush;
        std::cout << data[i][1] << std::endl;

    }
}

bool CSVReader::read()
//  ----------------------
//  Reads CSV content into data& and returns true if it worked.
//  ----------------------
{
    std::ifstream file(filename);
    data.clear(); // Clear the existing data if any
    nr_rows = 0;
    nr_cols = 0;


    if (!file.is_open()) {
        std::cerr << "  >> Error: Failed to open the file <" << filename << "> (CSVReader::read())"<< std::endl;
        return false;
    }

    std::string line;
    while (std::getline(file, line)) {
        std::vector<std::string> row;
        std::stringstream ss(line);
        std::string cell;

        nr_cols = 0;

        while (std::getline(ss, cell, delimiter)) {
            nr_cols++;
            row.push_back(cell);
            nr_cols++;
        }

        data.push_back(row);
        nr_rows++;
    }

    std::cout << "  >> Succeded to read file." << filename << std::endl;
    file.close();
    return true;
}


const std::vector<std::vector<std::string>>& CSVReader::getData() const
//  ----------------------
{
    return data;
}