#include "Header.h"

double Door::Get_price()
{
	return price;
}

int Door::Get_time()
{
	return time;
}

void Door::Show()
{
	cout << "Door parameters: \n\nMaterial - " << material << "\nPrice - " << price << "\nTime to install - " << time << endl <<endl << endl;
}

string Door::Get_material()
{
	return material;
}

double Wall::Get_price()
{
	return price;
}

int Wall::Get_time()
{
	return time;
}

void Wall::Show()
{
	cout << "Wall parameters: \n\nWidth - " << width << "\nHeight - " << height << "\nPrice - " << price << "\nTime to install - " << time << endl << endl << endl;
}

double Roof::Get_price()
{
	return price;
}

int Roof::Get_time()
{
	return time;
}

string Roof::Get_form()
{
	return form;
}

void Roof::Show()
{
	cout << "Roof parameters: \n\nForm - " << form << "\nPrice - " << price << "\nTime to install - " << time << endl << endl << endl;
}

double House::Price_house(Roof* r, Door* d, Window* win)
{
	double s = 0;
	for (int i = 0; i < 4; i++)
	{
		s += walls[i].Get_price();
	}
	s = s + r->Get_price() + d->Get_price() + win->Get_price();
	return s;
}

void House::Show_house(Wall* walls, Door* d, Roof* r, Window* win)
{
	cout << "Your house has 4 walls, one door made of " << d->Get_material() << ", "<<win->Get_type()<<" window \nand a " << r->Get_form() << " roof " << endl << endl;
	cout << "The total build time is " << total_time << " mins" << "\n\nThe total build price is " << Price_house(&*r, &*d, &*win) << "$" << endl;
}

int Window::Get_time()
{
	return time;
}

double Window::Get_price()
{
	return price;
}

string Window::Get_type()
{
	return type;
}

void Window::Show()
{
	cout << "Window parameters: \n\nType - " << type << "\nPrice - " << price << "\nTime to install - " << time << endl << endl;
}
