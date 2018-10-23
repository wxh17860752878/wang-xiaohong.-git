#include <iostream>

using namespace std;

int main()
{
	int n;
    int a, b = 1;
    int p;
    int result = 0;

	cout << "Number: ";
	cin >> n;

	while(n != 0)
	{
		a = n % 10;
        p = a * b;
        b = b * 2;
        n = n / 10;
        result = result + p;
	}

	cout << "Result is£º" << result << endl;
	return 0;
}


