#include <iostream>
using namespace std;

class IOObject {
public:
	void DisplayIntLessThan(int n) {
		--n;
		if (n > 0) {
			DisplayIntLessThan(n);
		}
		cout << n << endl;
	}

	int factoriaI(int n) {
		int t, result;
		result = 1;
		for (t = 1; t <= n; t++) result *= t;
		return result;
	}

	int factorialR(int n) {
		if(n == 1) {
			return 1;
		}
		return factorialR(n-1) * n;
	}
};

