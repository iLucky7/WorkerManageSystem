#include "CBoss.h"

CBoss::CBoss(/* args */)
{
}

CBoss::CBoss(int id, string name, int level)
{
    this->_id = id;
    this->_name = name;
    this->_level = level;
}

void CBoss::showInfo()
{
    cout << "id: "     << this->_id
         << "\tname: " << this->_name
         << "\tlevel:" << this->getLevel()
         << "\tduty:"
         << "to manage the whole company"
         << endl;
}

string CBoss::getLevel()
{
    return string("Boss");
}

CBoss::~CBoss()
{
}