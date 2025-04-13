#include <iostream>
#include "logic.h"

using namespace std;

int main(void)
{
	int* number = new int;

	cout << "Input your number: ";
	cin >> *number;

	cout << "Is your number palindrome? "
		<< (is_palindrome(*number) ? "Yes\n" : "No\n");
}