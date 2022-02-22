#pragma once

#include <string>
using namespace std;

class Diet
{
private:
	string name;
	int goal;
	string date;

public:
    string getName() { return name; }
    int getGoal() { return goal; }
    string getDate() { return date; }
    void setName(string n) { name = n; }
    void setGoal(int g) { goal = g; }
    void setDate(string d) { date = d; }
    bool isEmtpy();

    Diet() : name(""), goal(0), date("") {}
    Diet(string n, int g, string d) : name(n), goal(g), date(d) {}

    friend std::ostream& operator<<(std::ostream& os, Diet& obj);
    friend std::istream& operator >>(std::istream& is, Diet& obj);
};

