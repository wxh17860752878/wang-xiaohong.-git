#include <iostream>

using namespace std;

int main()
{
	int n;
    int a, b = 1;
    int p;
    int result = 0;

	cout << "Number£º"<<endl;
	cin >> n;

	while(n != 0)
	{
		a = n % 2;
        p = a * b;
        b = b * 10;
        n = n / 2;
        result = result + p ;
	}

	cout << "Result is£º" << result << endl;
	return 0;
}

