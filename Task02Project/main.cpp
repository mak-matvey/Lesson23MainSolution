#include <iostream>
#include "logic.h"

using namespace std;

int main(void)
{
	int* number = new int;

	cout << "Input your number: ";
	cin >> *number;

	cout << "Has your number at least one odd digit? "
		<< (at_least_one_odd(*number) ? "Yes\n" : "No\n");

	delete number;
}