#ifndef CSV_HPP
#define CSV_HPP
#include <vector>
#include <string>

class CSV
{
    public:
        void print_csv();

    private:
        std::vector<std::vector<std::string>> data;

};


#endif