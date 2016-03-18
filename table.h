#ifndef TABLE_H
#define TABLE_H

#include<iostream>
#include<string>
#include<vector>

class table
{
public:

    table();
    void addCodeword(std::string code, int frequency, std::string codeword);
    void print(void);

private:

    struct Item
    {
        std::string code;
        int frequency;
        std::string codeword;
    };
    std::vector<Item> item;

    int frequencyTotal(void);
    int frequencyLengthTotal(void);
};

#endif // TABLE_H
