// Andrew Estronick
// March 6th, 2016
// Computer Science 532 - Advanced Data Structures

#include "huffman.h"

huffman::huffman(std::string fileName)
{
    inFile.open(fileName);
    if(!inFile)
        exit(EXIT_FAILURE);

    while(std::getline(inFile, line))
    {
        std::string code;
        char character, colon;
        int frequency;

        std::stringstream(line) >> character >> colon >> frequency;
        code = character;
        node *tempNode = new node(code, frequency);
        queue.push(tempNode);
        nodePtrs.insert(nodePtrs.begin(), tempNode);
    }
}


huffman::~huffman()
{
    inFile.close();
    for(unsigned i=0; i < nodePtrs.size(); ++i)
        delete nodePtrs[i];
}


node* huffman::buildTree()
{
    while(queue.size() >= 2)
    {
        node *lowNode1 = queue.top();
        queue.pop();
        discard.push(lowNode1);

        node *lowNode2 = queue.top();
        queue.pop();
        discard.push(lowNode2);

        node *nodeSum = new node(lowNode1->code + lowNode2->code, lowNode1->frequency + lowNode2->frequency, lowNode1, lowNode2);
        queue.push(nodeSum);
        nodePtrs.insert(nodePtrs.begin(), nodeSum);
    }

    return queue.top();
}


void huffman::getCode(node *node, std::string s)
{
    if(node->leaf())
    {
        results.addCodeword(node->code, node->frequency, s);
        return;
    }

    getCode(node->left, s + "0");
    getCode(node->right, s + "1");    
}


void huffman::printResults()
{
    results.print();
}
