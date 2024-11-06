#include "Provider.h"

int main()
{
	Provider kyivstar("Kyivstar");
	kyivstar.addTariff(new SecondsTariff("day", 0.01));
	kyivstar.addTariff(new MinutesTariff("night", 0.15));
	kyivstar.showList();

}