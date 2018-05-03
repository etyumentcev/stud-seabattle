#include<iostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;

/*
std::std;
std::initializer_list
std::initializer_list<figure*>figures;
*/

const int width = 11;
const int height = 8;
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

void Setup()
{
}
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
};
/*
GameFieldImpl()
{
	Draw();
}*/

class ShipsImpl :public Figure
{
	Figure *ships;
	COORD position;
	// ќбъ€вление необходимой структуры
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
public:
	virtual void Draw()
	{
		int ships = 5;
		for (int i = 0; i < ships; i++) {
			position.X = 5;
			position.Y = height + 7;
			SetConsoleCursorPosition(hConsole, position);
			
				
				cout << "X:";
				cin >> position.X;
				
				cout << "Y:";
				cin >> position.Y;
				SetConsoleCursorPosition(hConsole, position);

				cout << char(30);
			
		}
		position.X = 15;
		position.Y = 15;
		SetConsoleCursorPosition(hConsole, position);


	}

};
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
		
		
		position.Y = height + 2;
		position.X = 1;
		SetConsoleCursorPosition(hConsole, position);
		for (int x=1; x < width-1; x++)
		{

					
			cout << (x);

		}

		position.Y = 0;
		position.X = width+1;
		SetConsoleCursorPosition(hConsole, position);
		for (int y = 1; y < height+1; y++)
		{
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
		
		ShipsImpl newS;
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
*/