// Andrew Estronick
// March 6th, 2016
// Computer Science 532 - Advanced Data Structures

#ifndef HUFFMAN_H
#define HUFFMAN_H

#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<queue>
#include "node.h"
#include "table.h"

class huffman
{
public:

    huffman(std::string fileName);
    ~huffman();
    node* buildTree(void);
    void getCode(node *node, std::string s);
    void printResults(void);

private:

    std::priority_queue<node*, std::vector<node*>, nodeCompare> queue;
    std::priority_queue<node*, std::vector<node*>, nodeCompare> discard;
    std::string fileName;
    std::ifstream inFile;
    std::string line;
    table results;
    std::vector<node*> nodePtrs;
};

#endif // HUFFMAN_H
