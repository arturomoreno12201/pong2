#include<iostream>
#include<cmath>
#include "sfwdraw.h"

using namespace sfw;


void main()
{
	initContext(800,600,"pong");
	//d/asda
	// da
	//fsadf
	//dsfsdkfos
	float acc = 0;
	char c = '\0';
	
	setBackgroundColor(BLACK);
	
	while (stepContext())
	{	
		if (getKey('W'));
		{
			acc += getDeltaTime() * 500;
		}
		if (getKey('S'))
		{

			acc -= getDeltaTime() * 500;

		}

		drawLine(10, 300 + acc, 10, 250 + acc, WHITE);


	}

	termContext();
}