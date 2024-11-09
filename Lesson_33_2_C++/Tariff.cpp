#include "Tariff.h"

Tariff::Tariff()
{
    name = "none";

}

Tariff::Tariff(std::string name)
{
    if (name.empty())throw new NameException("Empty string");
    if(name.find("XXX") != -1)throw new NameException("Bad word", name);
    this->name = name;
}

void Tariff::setName(std::string name)
{
    this->name = name;
}

std::string Tariff::getName() const
{
    return name;
}


void Tariff::show() const
{
    cout << "Name tariff: " << name << endl;
}
