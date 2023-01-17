#include <iostream>
using namespace std;

int main() {
	string text;
	cout << "Введите слово: \n";
	getline(cin, text);
	cout << "Ваше слово: \n" << text;
	return 0;
}
