#include "PlanNode.h"

std::ostream& operator<<(std::ostream& os, const PlanNode& obj)
{
    os << *obj.plan;
    return os;
}

std::istream& operator >>(std::istream& is, PlanNode& obj) {
    is >> *obj.plan;
    return is;
}