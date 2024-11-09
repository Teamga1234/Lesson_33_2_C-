#include "Provider.h"

int main()
{
	Provider kyivstar("Kyivstar");
	try
	{
		kyivstar.addTariff(new SecondsTariff("day", 0.01));
	}
	catch (MobileException* obj)
	{
		cout << obj->showMessage() << endl; delete obj;
	}
	try
	{
		kyivstar.addTariff(new MinutesTariff("night", 0.15));
	}
	catch (MobileException* obj)
	{
		cout << obj->showMessage() << endl; delete obj;
	}
	try
	{
		kyivstar.addTariff(new MinutesTariff("XXX", 15));
	}
	catch (MobileException* obj)
	{
		cout << obj->showMessage() << endl; delete obj;
	}
	try
	{
		kyivstar.addTariff(new MinutesTariff("", 15));
	}
	catch (MobileException* obj)
	{
		cout << obj->showMessage() << endl; delete obj;
	}
	try
	{
		kyivstar.addTariff(new MinutesTariff("E", 0));
	}
	catch (MobileException* obj)
	{
		cout << obj->showMessage() << endl; delete obj;
	}
	
	
	kyivstar.showList();

}