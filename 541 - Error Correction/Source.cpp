#include <iostream>
using namespace std;
int main() {
	int number;
	
	while (cin >> number) {
		if (number == 0) {
			break;
		}
		int pole[100][100];
		int p;
		for (int j = 0; j < number; j++)
		{
			for (int i = 0; i < number; i++)
			{
				cin >> p;
				pole[j][i] = p;
			}
		}
	
		int pomr[100];
		int poms[100];

		for (int i = 0; i < number; i++)
		{
			p = 0;
			int ps = 0;
			for (int j = 0; j <number; j++)
			{
				p += pole[i][j];
				ps += pole[j][i];
			}
			pomr[i] = p;
			poms[i] = ps;
		}
		int ir = -1;
		int is = -1;
		int flagr = 0;
		int flags = 0;

		for (int i = 0; i < number; i++)
		{
			if (pomr[i] %2 != 0){
				ir = i;
				flagr++;
			}
			if (poms[i] % 2 != 0) {
				is = i;
				flags++;
			}
		}
		if (ir == -1 && is == -1) {
			cout << "OK" << endl;
		}
		else if (flags == 1 && flagr == 1) {
			cout << "Change bit (" << ir+1 << "," << is+1 << ")"<< endl;
		}
		else {
			cout << "Corrupt" << endl;
		}
	}

	return 0;
}