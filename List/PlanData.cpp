#include <iostream>
#include <fstream>
#include <string>
#include "PlanData.h"

std::ostream& operator<<(std::ostream& os, PlanData& obj)
{
    os << obj.getName() << std::endl;
    os << obj.getGoal() << std::endl;
    os << obj.getDate() << std::endl;
    return os;
}

bool PlanData::isEmtpy()
{
    return (name.empty() && date.empty() && goal == 0);
}

std::istream& operator >>(std::istream& is, PlanData& obj)
{
    string line;
    if (getline(is, line)) {
        obj.name = line;
        if (getline(is, line)) {
            obj.goal = stoi(line);
            if (getline(is, line)) {
                obj.date = line;
            }
        }
    }
    return is;
}
