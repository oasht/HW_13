#include <iostream>  
#include <iomanip>  
#include <string.h>  
#include <Windows.h>  
#include<conio.h>  

using namespace std;
class Door
{
protected:
	string material;
	double price;
	int time;
public:
	Door()
	{
		material = "Wood";
		price = 50.55;
		time = 40;
	}
	Door(int n)
	{
		if (n == 1)
		{
			material = "Plastic";
			price = 32.30;
			time = 40;

		}
		if (n == 2)
		{
			material = "Wood";
			price = 50.55;
			time = 40;
		}

	}
	double Get_price();
	int Get_time();
	void Show();
	string Get_material();
};
class Wall
{
protected:
	int width;
	int height;
	double price;
	int time;
public:
	Wall()
	{
		width = 100;
		height = 260;
		price = 1050;
		time = 200;
	}
	double Get_price();
	
	int Get_time();
	

	void Show();
	
};

class Roof
{
protected:
	string form;
	double price;
	int time;
public:
	Roof()
	{
		form = "Triangle";
		price = 2500;
		time = 400;
	}
	double Get_price();

		int Get_time();

		string Get_form();

		void Show();
	
};
class Window
{
protected:
	string type;
	double price;
	int time;
public:
	Window()
	{
		type = "French";
		price = 101.79;
		time = 50;
	}
	int Get_time();
	double Get_price();
	string Get_type();
	void Show();
};

class House :public Door, public Wall, public Roof
{
protected:
	Wall* walls;
	int total_time;
public:
	House()
	{
		Wall* walls = new Wall[4]{};
		total_time = 0;
	}
	House(Wall* _w, Wall* w, Roof* r, Door* d, Window *win)
	{
		walls = _w;
		total_time = d->Get_time() + r->Get_time() + (w->Get_time() * 4)+win->Get_time();
	}

	double Price_house(Roof* r, Door* d, Window* win);
	
	void Show_house(Wall* walls, Door* d, Roof* r, Window* win);
	

};