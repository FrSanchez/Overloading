#include "DietNode.h"

std::ostream& operator<<(std::ostream& os, const DietNode& obj)
{
    os << *obj.plan;
    return os;
}

std::istream& operator >>(std::istream& is, DietNode& obj) {
    is >> *obj.plan;
    return is;
}