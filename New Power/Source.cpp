#include<iostream>
#include<fstream>
#include<string>
#include<windows.h>
#include<map> //Hash Table

using namespace std;

int main() {
	map<int, string>cool;
	while (true) {
		int i;
		string name;
		cout << "Enter some values names/brands/ect type 0 when done\n";
		cin >> name;
		if (name == "0") {
			break;
		}
		cool[i] = name;
		i++;
	}
	system("cls");
	cout << "Welcome to the console with this you can ues these controls\n";
	int num;
	cout << "1 Check Size\n";
	cout << "2 Find Item\n";
	cout << "Enter Num\n";
	cin >> num;
	
	if (num == 1) {
		cout << "The map has " << cool.size() << " values";
	}
	if (num == 2) {
		string val;
		cout << "Enter value to find\n";
		cin >> val;
		for (int j = 0; j < cool.size(); j++) {
			if (val == cool[j]) {
				cout << cool[j] << endl;
			}
		}
	}
	system("PAUSE");
	return 0;
}
