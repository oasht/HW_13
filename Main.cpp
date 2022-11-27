#include "Header.h"


int main()
{

		Door d1;
		d1.Show();
		Wall w1;
		Wall* ar_wl = new Wall[4]{ w1 , w1, w1, w1 };
		w1.Show();
		Roof r1;
		r1.Show();
		Window win1;
		win1.Show();
		House h2(ar_wl, &w1, &r1, &d1, &win1);
		cout << endl << "********************************************************************************" << endl;
		h2.Show_house(*&ar_wl, &d1, &r1, &win1);
	
}