/*#include <iostream>
using namespace std;
int main()
{
	cout << "Hello, World!" << endl;
	int p = 1;
	int i = 1;
	while (i <= 10)
	{
		p *= i;
		 i++;
	}

	cout << "p = " << p << " i = " << i << endl;
	return 0;

}*/


/*#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double n;
	double m;
	double z1;
	double z2;
	cout << "n = ?";cin >> n; cout << endl;
	cout << "m = ?"; cin >> m;cout << endl;

	z2 = (sqrt(m) - sqrt(n)) / m;
	z1 = ((m - 1) * sqrt(m) - (n - 1) * sqrt(n)) / (sqrt(m * m * m * n) + n * m + m * m - m);
	cout << "z1= " << z1<<endl;
	cout << "z2= " << z2 << endl;;
	system("pause");

}*/

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a;
	double z1;
	cout << "a = ?"; cin >> a; cout << endl;
	z1 = (cos(a) + sin(a)) / (cos(a) - sin(a));
	cout << "z = "; cout << z1;cout << endl;
	system("pause");

}
