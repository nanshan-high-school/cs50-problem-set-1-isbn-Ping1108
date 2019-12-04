#include <iostream>
using namespace std;

int main() {
	long long isbn;
	do {
		cout << "請輸入ISBN碼:";
		cin >> isbn;
	} while (isbn < 1000000000);

	int number = 0;

	number += isbn * 10 / 1000000000;
	isbn = isbn % 1000000000;

	number += isbn * 9 / 100000000;
	isbn = isbn % 100000000;

	number += isbn * 8 / 10000000;
	isbn = isbn % 10000000;

	number += isbn * 7 / 1000000;
	isbn = isbn % 10000000;

	number += isbn * 6 / 100000;
	isbn = isbn % 100000;

	number += isbn * 5 / 10000;
	isbn = isbn % 10000;

	number += isbn * 4 / 1000;
	isbn = isbn % 1000;

	number += isbn * 3 / 100;
	isbn = isbn % 100;

	number += isbn * 2 / 10;
	isbn = isbn % 10;

	number += isbn * 1 / 1;
	isbn = isbn % 1;

	int remainder = number % 11;
	if (remainder == isbn ) {
		cout << "正確";
	}
	else {
		cout << "錯誤";
	}
}
