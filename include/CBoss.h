#pragma once 
#include <iostream>
#include <string>
#include "CWorker.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

class CBoss:public CWorker
{
private:
    /* data */
public:
    CBoss(/* args */);
    CBoss(int id, string name, int level);
    string getLevel() override;
    void showInfo() override;
    // void addWorker() override;
    // void modifyWorker() override;
    ~CBoss();
};

