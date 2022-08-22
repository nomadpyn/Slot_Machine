#pragma once
// класс барабан
class drum
{
	char roll[6]{1,3,4,5,6,14};
public:
	// описание методов класса
	void move();
	void spin();
	char getChar();
};

