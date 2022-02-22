#include <iostream>
#include <fstream>
#include <string>
#include "Excercise.h"

using namespace std;

std::ostream& operator<<(std::ostream& os, Excercise& obj)
{
    os << obj.getName() << std::endl;
    os << obj.getGoal() << std::endl;
    os << obj.getDate() << std::endl;
    return os;
}

std::istream& operator >>(std::istream& is, Excercise& obj)
{
    string line;
    if (!getline(is, line)) { return is; }
    obj.name = line;
    if (!getline(is, line)) { return is; }
    obj.goal = stoi(line);
    if (!getline(is, line)) { return is; }
    obj.date = line;
    return is;
}