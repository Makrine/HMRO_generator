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
	string xxxxx;

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
	string mro;

	c1 = 'A' + rand()%26;
	c2 = 'A' + rand()%26;
	c3 = 'A' + rand()%26;
	c4 = '0' + rand()%10;
	mro.push_back(c1);
	mro.push_back(c2);
	mro.push_back(c3);
	mro.push_back(c4);
	return mro;
}

void PrintPM() {
	for(auto& y: PM) cout << y.first << " " << y.second << endl;

}

void PrintMRO() {
	auto it = PM.begin();
        advance(it, rand() % PM.size());
        string random_key = it->second;
        cout << random_key;
}

void PrintPESEL() {
	auto it = PM.begin();
	advance(it, rand() % PM.size());
	string random_key = it->first;
	cout << random_key << endl;
}
int main(int argc, char** argv) {
	if(argc < 5) {cout << "Please enter\nThe number of test cases\nThe number of Pesel+MRO\nThe number of Closed MROs\nThe number of PESELS\n" << endl;
		cout << "Here's how to use\n\n ./GENERATOR t n m p\n\nt=The number of test cases\nn=The number of Pesel+MRO\nm=The number of Closed MROs\np=The number of PESELS\n" << endl;
		cout << "If you enter more than 1 test cases then add another n, m and p to the command for the each new test case" << endl;
	}
	else {
	int t = atoi(argv[1]); //number of TEST cases
	int n;
	int m, p;
	int z = 1;
	string pesel, mro;
	cout << t << endl;
	srand(time(NULL));
	for(int k=1; k <= t; k++) {
		PM.clear();
		for(int j=k+z; j <= k*3+1; j+=3) {//see ExplainLOOP.txt for this loop explanation
			n = atoi(argv[j]);	//number of Pesel and MRO
			m = atoi(argv[j+1]);    //number of Closed MROSs
			p = atoi(argv[j+2]);    //number of Pesels
			cout << n <<endl;

			for(int i=0; i<n; i++)
			{

				pesel = RandomPESEL();
				mro = RandomMRO();
				PM[pesel] = mro;
			}
			PrintPM();
			cout << m << endl;
			for(int i=0; i<m; i++) {PrintMRO(); cout << " "; PrintMRO(); cout << endl;}
			cout << p << endl;
			for(int i=0; i<p; i++) PrintPESEL();
			cout << endl;
			z+=2;
		}
	}}
	return 0;
}
