#include "drum.h"
#include<iostream>
#include<random>

using namespace std;

void drum::move() {
	char temp = roll[0];
	for (int i = 1; i < 6; i++)
		roll[i - 1] = roll[i];
	roll[5] = temp;
}

void drum::spin() {
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dist(1, 50);
	
	for (int i = 0; i < dist(gen); i++) {
		move();
	}
}

char drum::getChar() {
	this->spin();
	return this->roll[0];
}
