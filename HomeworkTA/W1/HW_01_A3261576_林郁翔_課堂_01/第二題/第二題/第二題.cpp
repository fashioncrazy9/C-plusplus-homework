#include <iostream>
using namespace std;

int main()
{
	/* 請將此範例重寫，以 [指標] 替代 [陣列] char stars[][] */



	char *stars[80] = { "Alan Mathison Turing",
		"John von Neumann",
		"Gordon Earle Moore",
		"Steven Paul Jobs",
		"William Henry \"Bill\" Gates III",
		"Andy Rubin"
	};


	int dice = 0;

	cout << endl
		<< "Pick a lucky star! "
		<< "Enter a number between 1 and 6: ";
	cin >> dice;

	if (dice >= 1 && dice <= 6)                  // Check input validity
		cout << endl                             // Output star name
		<< "Your lucky star is " << *(stars + dice - 1);//[dice - 1]; //
	else
		cout << endl                             // Invalid input
		<< "Sorry, you haven't got a lucky star.";

	cout << endl;
	system("PAUSE");
	return 0;
}