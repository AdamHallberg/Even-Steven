#ifndef CSVREADER_H
#define CSVREADER_H

#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

class CSVReader
{
    /*
    Class that manages basic reads and operations with csv files. constructor arguments
    are such that one can choose thier own delimiters.

    Everything is constructed so that the data is read into the private datamember
    "vector<vector<string>> data", so first index decides row, and second wich element.
    */

    public:
        CSVReader(const std::string& file, char delimit = ',');

        bool read();
        
        long unsigned int get_nr_rows();
        long unsigned int get_nr_cols();
        
        void fix_data();


        const std::vector<std::vector<std::string>>& getData() const;


    private:

        const char delimiter{};
        long unsigned int nr_rows{};
        long unsigned int nr_cols{};


        const std::string filename{};
        std::vector<std::vector<std::string>> data{};
};

#endif  //CSVREADER_H