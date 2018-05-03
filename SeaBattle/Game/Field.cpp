#include<iostream>
#include <stdlib.h>
#include <windows.h>
//#include "SetX_YCoord.cpp"
using namespace std;

/*
std::std;
std::initializer_list
std::initializer_list<figure*>figures;
*/

const int width = 24;
const int height = 24;
/*
int main()
{
	 void Draw();

}*/
class GameField
{
public:
	virtual void Draw () = 0;
	void game(GameField&gamefield)
	{
		gamefield.Draw();
	}


};


class Figure

{
public: 
	virtual void Draw() = 0;

};

class GameFieldImpl : public Figure
{
	Figure *background;

public:
	//virtual void Draw();
	

	virtual void Draw()
	{
		
		//background->Draw();

		//system("cls");
		for (int i = 0; i < width; i++) {
			cout << char(178);

		}
		
		cout << endl;

		for (int i = 0; i < height-2; i++) {
			for (int j = 0; j < width; j++) {
				if (j == 0 || j == width - 1)
					cout << char(178);
				else {
					cout << " ";
				}
			}
			cout << endl;
		}

		for (int i = 0; i < width; i++) {
			cout << char(178);
		}
	}
};
/*
GameFieldImpl()
{
	Draw();
}*/

class ShipImpl :public Figure
{
	Figure *ship;
	COORD position;
	// ќбъ€вление необходимой структуры
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
public:
	virtual void Draw()
	{
		//int ships = 5;
		//for (int i = 0; i < 1; i++) {
		position.X = 0;
		position.Y = height + 7;
		SetConsoleCursorPosition(hConsole, position);


		cout << "X:";
		cin >> position.X;
		position.Y++;
		
		cout << "Y:";
		cin >> position.Y;
		SetConsoleCursorPosition(hConsole, position);
		for (int i = 0; i < 1; i++) {
			cout << char(176);
			position.X++;
			SetConsoleCursorPosition(hConsole, position);
			cout << char(176);
			position.Y++;
			SetConsoleCursorPosition(hConsole, position);
			cout << char(176);
			position.X--;
			SetConsoleCursorPosition(hConsole, position);
			cout << char(176);

			position.X = width+10;
			position.Y = height+10;
			SetConsoleCursorPosition(hConsole, position);
		}


	}
};
		//position.X = 15;
		//position.Y = 15;
		//SetConsoleCursorPosition(hConsole, position);


	//}


class Ships
{
public:
	virtual void Draw() = 0;
	void game(Ships&ships)
	{
		ships.Draw();
	}
};

class SetXCoord :public Figure
{
	Figure *coord;
	COORD position;
	// ќбъ€вление необходимой структуры
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
public:
	virtual void Draw()
	{



		//	for (int x=1; x < width-1; x+=2)
			//{
		position.Y = height;
		position.X = -1;
		SetConsoleCursorPosition(hConsole, position);
		for (int x = 1; x < (width ) / 2; x++)
		{
			position.X++;
			position.X++;
			SetConsoleCursorPosition(hConsole, position);
			cout << (x);

		}
	}
};
		//}
	class SetYCoord :public Figure
	{
		Figure *coord;
		COORD position;
		// ќбъ€вление необходимой структуры
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	public:
		virtual void Draw()
		{

			position.Y = -1;
			position.X = width + 1;
			SetConsoleCursorPosition(hConsole, position);
			for (int y = 1; y < (height + 1) / 2; y++)
			{
				position.Y++;
				position.Y++;
				SetConsoleCursorPosition(hConsole, position);
				cout << (y);

			}
		}

	};
	





int main()
{
	
		GameFieldImpl newG;
		newG.Draw(); 
		SetXCoord newC;
		newC.Draw();
		
		SetYCoord newY;
		newY.Draw();

		ShipImpl newS;
		newS.Draw();

		system("pause");
}


/*
GameFieldImpl(Figure *background)
{
	list <Figure*> const figures;
}

class Figure
{
public:
	virtual void;
	Draw() = 0;
};
*/
//gamefield.Draw();



/*

GameFieldImpl(Figure*background, list<Figure*>const&_figures)
{

}




//background->Draw();

//system("cls");
for (int i = 0; i < width; i++) {
cout << char(178);
}
cout << endl;

for (int i = 0; i < height; i++) {
for (int j = 0; j < width; j++) {
if (j == 0 || j == width - 1)
cout << char(178);
else {
cout << " ";
}
}
cout << endl;
}

for (int i = 0; i < width; i++) {
cout << char(178);
}
}
*/