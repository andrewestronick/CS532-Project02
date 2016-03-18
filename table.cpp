#include "table.h"

table::table()
{
}

void table::addCodeword(std::string code, int frequency, std::string codeword)
{
    Item tempItem;

    tempItem.code = code;
    tempItem.frequency = frequency;
    tempItem.codeword = codeword;

    item.insert(item.begin(), tempItem);

}

void table::print()
{
    if (0 == frequencyTotal())
        return;

    for(unsigned i = 0; i < item.size(); ++i)
        std::cout << item[i].code << ":" << item[i].frequency << "=" << item[i].codeword << std::endl;

    double lavg = 1.0 * frequencyLengthTotal() / frequencyTotal();
    double cr = (8 - lavg) / 8;
    std::cout << "L avg=" << lavg << "  CR=" << cr << std::endl;

}

int table::frequencyTotal()
{
    int total = 0;

    for(unsigned i = 0; i < item.size(); ++i)
        total += item[i].frequency;

    return total;
}

int table::frequencyLengthTotal()
{
    int total = 0;

    for(unsigned i = 0; i < item.size(); ++i)
        total += (item[i].frequency * item[i].codeword.size());

    return total;
}
