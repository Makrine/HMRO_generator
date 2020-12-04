//THE CODE IS BEING CREATED
#include <iostream>
#include <string>
#include <cmath>
#include <unordered_map>
using namespace std;

unordered_map<string,string> PM;

string RandomPESEL() {

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
	return pesel;
}

string RandomMRO() {

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
	return mro;
}

int main(int argc, char** argv) {
	int t = atoi(argv[1]); //number of TEST cases
	int n;
	int m, p;
	int z = 1;
	string pesel, mro;
	cout << t << endl;
	srand(time(NULL));
	for(int k=1; k <= t; k++) {
		PM.clear();
		for(int j=k+z; j <= k*3+1; j+=3) { //see ExplainLOOP.txt about this loop
			n = atoi(argv[j]);
			m = atoi(argv[j+1]);
			p = atoi(argv[j+2]);
			cout << n <<endl;

			for(int i=0; i<n; i++)
			{

				pesel = RandomPESEL();
				mro = RandomMRO();
				PM[pesel] = mro;
			}
			for(auto& y: PM) cout << y.first << " " << y.second << endl;
			cout << m << endl << p << endl << endl;
			z+=2;
		}

	}
	return 0;
}
