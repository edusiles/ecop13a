#include <iostream>
#include <string>
#include "bigint.h"

using namespace std;

void BigInt::read() {
	string x;

	cin >> x;
	
	length = x.length();
	
	for(int i = 0; i < length; i++) {
		number[i] = x[length - i - 1] - '0';
	}
}

void BigInt::print() {
	for(int i = length - 1; i >= 0; i--)
		cout << number[i];

	cout << endl;
}

BigInt BigInt::sum(BigInt b) {
	BigInt c;

	c.length = 0;

	for(int i = 0, goOne = 0; goOne || i < max(length, b.length); i++) {
		int x = goOne;

		if(i < length)
			x += number[i];

		if(i < b.length)
			x += b.number[i];

		c.number[c.length++] = x % 10;
		goOne = x / 10;
	}

	return c;
}

BigInt BigInt::subtract(BigInt b) {
	BigInt c;
	c.length = 0;

	for(int i = 0; i < max(length, b.length); i++) {
		int x = 0;

		if(i < length)
			x += number[i];

		if(i < b.length) {
			if(number[i] >= b.number[i])
				x -= b.number[i];
			else {
				x += 10 - b.number[i];
				number[i + 1]--;
			}
		}

            c.number[c.length++] = x;
	}

	return c;
}