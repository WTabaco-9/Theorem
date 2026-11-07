#ifndef CSV_HPP
#define CSV_HPP
#include <vector>
#include <string>
#include <iostream>
#include <fstream>

class CSV
{
    public:
        /* Prints out the CSV data */    
        void print_csv(const std::vector<std::vector<std::string>> &data);
        
        /* Reads the CSV file from the specified file path */
        void read_csv(const std::string &file_path);

        /* Setters & Getters*/
        void set_SAMPLE(std::vector<std::vector<std::string>> sample) { this->data = sample; };
        std::vector<std::vector<std::string>> const get_SAMPLE() { return this->data;}

    private:
        std::vector<std::vector<std::string>> data;

};

void CSV::print_csv(const std::vector<std::vector<std::string>> &data)
{
    for (unsigned int row = 0; row < data.size(); ++row)
    {
        for (unsigned int col = 0; col < data[row].size(); ++col)
        {
            std::cout << data[row][col] << ' ';
        }
        std::cout << std::endl;
    }
}

void CSV::read_csv(const std::string &file_path)
{

}

#endif