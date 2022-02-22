#include "Node.h"

Node::~Node() {
    if (plan != nullptr) {
        delete(plan);
    }
}

std::ostream& operator<<(std::ostream& os, const Node& obj)
{
    os << *obj.plan;
    return os;
}

std::istream& operator >>(std::istream& is, Node& obj) {
    is >> *obj.plan;
    return is;
}