// List.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <iostream>
#include <string>
#include "PlanList.h"

using namespace std;

int main()
{
    PlanList plans;
    ifstream myFile;
    myFile.open("Plans.txt", ios::in);
    if (myFile.is_open()) {
        string temp;
        do {
            if (!myFile.eof()) {
                Plan* plan = new Plan();
                myFile >> *plan;
                if (plan->isEmtpy()) {
                    delete(plan);
                }
                else {
                    plans.add(new PlanNode(plan));
                }
                
            }
        } while (getline(myFile, temp));
    }
    std::cout << plans << std::endl;
}
