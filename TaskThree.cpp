#include <iostream>
using namespace std;
double fact(int N)
{
	if (N < 0)
		return 0;
	if (N == 0)
		return 1;
	else
		return N * fact(N - 1);
}

int recursion(int n) {
	if (n == 1) {
		return n;
	}
	else
		return (2 * recursion(n - 1) + fact(n));

}
int main(){
	int n, i = 1, s = 0;
	cout << "enter n:";
	cin >> n;
	for (i; i <= n; i++) {
		s += recursion(n);
		cout << s << endl;

	}
	return 0;
}