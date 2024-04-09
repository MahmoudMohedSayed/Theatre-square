#include <iostream>
using namespace std;

int main()
{       //theatre square
	int a, m, x;
	int sizet, sizef, n;

	cout << "enter x and m of theatre square\n";
	cin >> x >> m;
	sizet = m * x;
	cout << "size of theatre square is : " << sizet << endl;

	cout << "enter a of flagstone\n";
	cin >> a;
	sizef = a * a;
	cout << "size of flagstone is : " << sizef << endl;

	n = sizet / sizef;
	cout << "namber of flagstone is : " << n;

	return 0;
}