#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "CWorker.h"
#include "CEmployee.h"
#include "CManager.h"
#include "CBoss.h"

#define FILENAME "database.txt"

using std::cin;
using std::cout;
using std::endl;

using std::ifstream;
using std::ios;
using std::ofstream;

class CCtrlSystem
{
public:
    CCtrlSystem(/* args */);

    void showMenu();
    void exitSystem();
    void addWorkers();
    void saveFile();
    int getSize(ifstream &ifs);
    void initArray();
    void showWorkers();
    int isExist(int id);
    void delWorker();
    void modifyWorker();
    void searchWorker();
    void sortWorkers();
    void clearAllWorkers();

    ~CCtrlSystem();

private:
    int _isFileEmpty;
    int _size;
    CWorker **_p_workerArray;
};
