// Andrew Estronick
// March 6th, 2016
// Computer Science 532 - Advanced Data Structures

#include <iostream>
#include <string>
#include "huffman.h"

using namespace std;

int main(int argc, char *argv[])
{
    const string path = "F:/Andrew/_code/CS532/CS532-Project02/";
    huffman h(path + "input1.txt");
    h.getCode(h.buildTree(), "");
    h.printResults();

    cout << "\n\n------------------------------------------------------------------\n\n";

    huffman i(path + "input2.txt");
    i.getCode(i.buildTree(), "");
    i.printResults();

    return 0;
}
