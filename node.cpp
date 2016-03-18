#include "node.h"
#include<iostream>

node::node(std::string code, int frequency)
{
    init(code, frequency);
}


node::node(std::string code, int frequency, node *left, node *right)
{
    init(code, frequency);
    this->left = left;
    this->right = right;
}

bool node::leaf()
{
    return (nullptr == left && nullptr == right);
}

std::string node::tag()
{
    std::stringstream tag;
    tag << code << ":" << frequency;

    return tag.str();
}


void node::init(std::string code, int frequency)
{
    this->code = code;
    this->frequency = frequency;
}
