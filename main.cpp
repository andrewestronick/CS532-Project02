// Andrew Estronick
// March 6th, 2016
// Computer Science 532 - Advanced Data Structures

#include <iostream>
#include "huffman.h"

using namespace std;

int main(int argc, char *argv[])
{
    huffman h("F:/Andrew/_code/CS532.local/Project02/input1.txt");
    h.getCode(h.buildTree(), "");
    h.printResults();

    cout << "\n\n------------------------------------------------------------------\n\n";

    huffman i("F:/Andrew/_code/CS532.local/Project02/input2.txt");
    i.getCode(i.buildTree(), "");
    i.printResults();

    return 0;
}
