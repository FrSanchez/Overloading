// List.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <iostream>
#include <string>
#include "Diet.h"
#include "List.h"

using namespace std;

int main()
{
    List plans;
    ifstream myFile;
    myFile.open("DietPlans.txt", ios::in);
    if (myFile.is_open()) {
        string temp;
        do {
            if (!myFile.eof()) {
                Diet* plan = new Diet();
                myFile >> *plan;
                if (plan->isEmtpy()) {
                    delete(plan);
                }
                else {
                    plans.add(new Node(plan));
                }
            }
        } while (getline(myFile, temp));
    }
    std::cout << "List Size: " << plans.getSize() << std::endl;
    std::cout << plans << std::endl;
}
