#include <unistd.h>

int is_leap_year(int year);

int main()
{
	if (is_leap_year(2014))
	{
		write(1, "Leap Year!\n", 11);
	}
	else 
	{
		write(1, "Not Leap Year!\n", 16);
	}
}

int is_leap_year(int year)
{
	if (year % 4 != 0)
		return (0);
	else if (year % 100 != 0)
		return (1);
	else if (year % 400 != 0)
		return (0);
	else
		return (1);
}

