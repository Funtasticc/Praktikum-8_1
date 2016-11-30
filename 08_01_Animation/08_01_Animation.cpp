#include <iostream>
#define CIMGGIP_MAIN
#include "CImgGIP03.h"
using namespace std;
int main()
{
	bool rechts = true;
	const int left_border = 100;
	const int right_border = 500;
	int x = 200, y = 300;
	const int rectangle_size = 50;
	int delta = 10;
	gip_white_background();

	while (gip_window_not_closed())
	{
		gip_draw_rectangle(left_border, 100,
			right_border, 500,
			blue);
		gip_draw_rectangle(x, y,
			x + rectangle_size,
			y + rectangle_size,
			white);
		if (x == right_border - rectangle_size) rechts = false;
		else if (x == left_border) rechts = true;

		if (rechts) x += delta;
		else x -= delta;
		gip_wait(50);
	}
	return 0;
}