//THE CODE IS BEING CREATED
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void RandomPESEL() {
	int mm, dd;
	string pesel;
	string m, d;
	int x;
	string xxxxx= "";

	mm = 1 + rand()%12;
	dd = 1 + rand()%31;

	if(mm < 10) m = "0" + to_string(mm);
	else m = to_string(mm);

	if(dd < 10) d = "0" + to_string(dd);
	else d = to_string(dd);

	x = 1 + rand()%99999;
	for(int i = 4; i > 0; i--) {
		if(x/pow(10,i) == 0 || x/pow(10, i) < 1) xxxxx += "0";
		else {xxxxx += to_string(x); break;}
		if(i==1) xxxxx += to_string(x);
	}
	pesel = "84" + m + d + xxxxx;
	cout << pesel;
}

void RandomMRO() {
	char c1, c2, c3, c4;
	int r1, r2, r3, r4;
	string mro = "";

	r1 = rand()%26;
	r2 = rand()%26;
	r3 = rand()%26;
	r4 = rand()%10;
	c1 = 'A' + r1;
	c2 = 'A' + r2;
	c3 = 'A' + r3;
	c4 = '0' + r4;
	mro.push_back(c1);
	mro.push_back(c2);
	mro.push_back(c3);
	mro.push_back(c4);
	cout << mro;
}

int main(int argc, char** argv) {
	int t = atoi(argv[1]); //number of TEST cases
	int n;
	cout << t << endl;
	while(t--) {
		for(int j=2; j < argc; j++) {
			n = atoi(argv[j]);
			cout << n << endl;

			srand(time(NULL));
			for(int i=0; i<n; i++)
			{

				RandomPESEL();
				cout << " ";
				RandomMRO();
				cout << endl;
			}
			cout << endl;
		}
	}
	return 0;
}
