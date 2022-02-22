#pragma once

#include <string>
class Excercise
{
private:
	std::string name;
	int goal;
	std::string date;

public:
	Excercise() : name(), goal(0), date() {};
	Excercise(std::string n, int g, std::string d) : name(n), goal(g), date(d) {};
	std::string getName() { return name;  }
	int getGoal() { return goal;  }
	std::string getDate() { return date; }
	void setName(std::string n) { name = n; }
	void setGoal(int g) { goal = g; }
	void setDate(std::string d) { date = d; }

	friend std::ostream& operator<<(std::ostream& os, Excercise& obj);
	friend std::istream& operator >>(std::istream& is, Excercise& obj);
};

