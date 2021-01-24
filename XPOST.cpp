#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

void time_delay(int seconds)
{
	int milli_seconds = 1000 * seconds;
	clock_t start_time = clock();
	while (clock() < start_time + milli_seconds);
}

int main()
{
	int i; int loops; int IF1;
	do
	{
		cout << "\nloops: "; cin >> loops;
		if (loops > 0)
		{
			for (i = 0; i < loops; i++)
			{
				cout << "\nIF1: "; cin >> IF1;
				time_delay(0.75);
				if (IF1 == 0)
				{
					cout << "\ninvalid -curl XPOST request.\n";
					time_delay(0.75);
					return main();
				}
			}
			if (IF1 == 1)
			{
				cout << "\ncurl XPOST request attached.\n";
				time_delay(0.75);
			}
		}
		else
		{
			exit(1);
		}
	} while (true);
	return 0;
}
