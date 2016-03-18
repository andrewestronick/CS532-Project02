#ifndef NODE_H
#define NODE_H

#include<string>
#include<sstream>

class node
{
public:

    std::string code;
    int frequency;
    node *left = nullptr;
    node *right = nullptr;

    node(std::string code, int frequency);
    node(std::string code, int frequency, node *left, node *right);
    bool leaf(void);
    std::string tag(void);

private:

    void init(std::string code, int frequency);
};


struct nodeCompare
{
    bool operator() (node *firstNode, node *secondNode)
    {
        return (firstNode->frequency > secondNode->frequency);
    }
};
#endif // NODE_H
