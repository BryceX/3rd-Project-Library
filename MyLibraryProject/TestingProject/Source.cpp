#include "MyLibrary\MyLibrary.h"
#include <iostream>

int main()
{
	Vector2D temp1;
	temp1.x = 0;
	temp1.y = 0;
	Vector2D temp2;
	temp2.x = 10;
	temp2.y = 10;

	Vector2D temp3	= temp1.Lerp(temp2, 1);
	std::cout << temp3.x << temp3.y << std::endl;
	system("pause");
}