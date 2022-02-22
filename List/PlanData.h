#pragma once

#include <string>
using namespace std;

class PlanData
{
private:
	string name;
	int goal;
	string date;

public:
	PlanData() : name(), goal(0), date() {};
	PlanData(std::string n, int g, std::string d) : name(n), goal(g), date(d) {};

	std::string getName() { return name; }
	int getGoal() { return goal; }
	std::string getDate() { return date; }
	void setName(std::string n) { name = n; }
	void setGoal(int g) { goal = g; }
	void setDate(std::string d) { date = d; }

	bool isEmtpy();

	friend std::ostream& operator<<(std::ostream& os, PlanData& obj);
	friend std::istream& operator>>(std::istream& is, PlanData& obj);
};

