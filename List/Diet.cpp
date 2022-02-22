#include <iostream>
#include <fstream>
#include <string>
#include "Diet.h"

std::ostream& operator<<(std::ostream& os, Diet& obj)
{
    os << obj.getName() << std::endl;
    os << obj.getGoal() << std::endl;
    os << obj.getDate() << std::endl;
    return os;
}

bool Diet::isEmtpy()
{
    return (name.empty() && date.empty() && goal == 0);
}

std::istream& operator >>(std::istream& is, Diet& obj)
{
    string line;
    if (!getline(is, line)) { return is;  }
    obj.name = line;
    if (!getline(is, line)) { return is; }
    obj.goal = stoi(line);
    if (!getline(is, line)) { return is; }
    obj.date = line;
    return is;
}