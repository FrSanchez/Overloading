#include <iostream>
#include <fstream>
#include <string>
#include "Plan.h"

std::ostream& operator<<(std::ostream& os, Plan& obj)
{
    os << obj.getName() << std::endl;
    os << obj.getGoal() << std::endl;
    os << obj.getDate() << std::endl;
    return os;
}

bool Plan::isEmtpy()
{
    return (name.empty() && goal.empty() && date.empty());
}

std::istream& operator >>(std::istream& is, Plan& obj)
{
    string line;
    if (!getline(is, line)) { return is;  }
    obj.name = line;
    if (!getline(is, line)) { return is; }
    obj.goal = line;
    if (!getline(is, line)) { return is; }
    obj.date = line;
    return is;
}