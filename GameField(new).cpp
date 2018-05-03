#include<iostream>
#include <stdlib.h>
#include <windows.h>
#include <map>
#include <vector>


using namespace std;

const int width = 22;
const int height = 22;

class GameField
{
public:
	virtual void Draw() = 0;
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

private:
	int x = width;
	int y = height;
	int p1;
	int p2;
public:
	GameFieldImpl(int X, int Y) //эти параметры мы передадим при создании объекта в main
	{
		p1 = X;//присвоим нашим элементам класса значения параметров
		p2 = Y;
	};



	virtual void Draw();

};


void GameFieldImpl::Draw()
{
	COORD position;
	// ���������� ����������� ���������
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	position.X = p1;
	position.Y = p2;
	SetConsoleCursorPosition(hConsole, position);


	for (int i = 0; i < x; i++)
	{
		cout << char(178);

	}
	for (int i = 0; i < x; i++)
	{

		if (0 == i)
		{

			SetConsoleCursorPosition(hConsole, position);
			for (int j = 0; j < height - 1; j++)
			{
				position.Y++;
				SetConsoleCursorPosition(hConsole, position);
				cout << char(178);


			}


		}


	}

	for (int i = 0; i < x - 1; i++)
	{
		cout << char(178);


	}
	position.X = p1 + width - 1;
	SetConsoleCursorPosition(hConsole, position);
	for (int j = 0; j < height - 1; j++)
	{
		position.Y--;
		SetConsoleCursorPosition(hConsole, position);
		cout << char(178);


	}

	position.X = p1 - 1;
	position.Y = p2 - 1;

	SetConsoleCursorPosition(hConsole, position);
	for (int x = 1; x < (width) / 2; x++)
	{
		position.X++;
		position.X++;
		SetConsoleCursorPosition(hConsole, position);
		cout << (x);

	}
	position.X = p1 - 2;
	position.Y = p2 - 1;

	SetConsoleCursorPosition(hConsole, position);
	for (int y = 1; y < (height + 1) / 2; y++)
	{
		position.Y++;
		position.Y++;
		SetConsoleCursorPosition(hConsole, position);
		cout << (y);

	}

};



class ShipImpl :public Figure
{
	Figure *ship;

private:
	int p1;
	int p2;

public:
	ShipImpl() 
	{
		
	
	}
	void setShipImpl()
	{
		COORD position;
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		cout << "X:";
		cin >> position.X;
		position.X = position.X * 2 + 1;
		cout << "Y:";
		cin >> position.Y;
		position.Y = position.Y * 2 + 1;
		SetConsoleCursorPosition(hConsole, position);
	
	};
	void getShipImpl()
	{
		for (int i = 0; i < 1; i++) {
			COORD position;
			HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
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
		}


	}
	/*ShipImpl(int X, int Y)
		 //эти параметры мы передадим при создании объекта в main
	{
		cout << "X:";
		cin >> position.X;
		position.X = position.X * 2 + 1;

		cout << "Y:";
		cin >> position.Y;


		position.Y = position.Y * 2 + 1;
		SetConsoleCursorPosition(hConsole, position);
	
	};*/
	/*void setShipImpl()
	{
		COORD position;
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

		cout << "X:";
		cin >> position.X;
		position.X = position.X * 2 + 1;

		cout << "Y:";
		cin >> position.Y;


		position.Y = position.Y * 2 + 1;
		SetConsoleCursorPosition(hConsole, position);
	
	};*/

	virtual void Draw();



};
void ShipImpl::Draw()
{
	COORD position;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


	position.X = 0;
	position.Y = height + 7;
	SetConsoleCursorPosition(hConsole, position);

	cout << "Enter X,Y  coord ship:\n";
	for (int i = 0; i, i < 3; i++)
	{


		cout << "X:";
		cin >> position.X;
		position.X = position.X * 2 + 1;

		cout << "Y:";
		cin >> position.Y;


		position.Y = position.Y * 2 + 1;
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
		}
		/*position.X = width + 10;
		position.Y = height + 10;
		SetConsoleCursorPosition(hConsole, position);*/
		position.X = 0;
		position.Y = height + 8;
		SetConsoleCursorPosition(hConsole, position);

	}
	position.X = 0;
	position.Y = height + 9;
	SetConsoleCursorPosition(hConsole, position);
	/*position.X = 0;
	position.Y = height + 10;
	SetConsoleCursorPosition(hConsole, position);*/
	/*cout << "Enter X,Y 2Ship:\n";
	for (int i = 0; i, i < 2; i++)
	{


	cout << "X:";
	cin >> position.X;
	position.X = position.X * 2 + 1;

	cout << "Y:";
	cin >> position.Y;
	position.Y = position.Y * 2 + 1;
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
	}
	/*position.X = width + 10;
	position.Y = height + 10;
	SetConsoleCursorPosition(hConsole, position);
	position.X = 0;
	position.Y = height + 10;
	SetConsoleCursorPosition(hConsole, position);

	}*/

	position.X = 0;
	position.Y = height + 7;
	SetConsoleCursorPosition(hConsole, position);

	//cout << "Enter X,Y 2Ship:\n";

};
/*class Ship2 :public ShipImpl
{
ShipImpl *ship;

private:

public:

virtual void Draw();

};
void Ship2::Draw()
{
for (int i = 0; i < 3;i++)
{
ShipImpl newS;
newS.Draw();
//position.Y++;


}




};*/
class Ships
{
public:
	virtual void Draw() = 0;
	void game(Ships&ships)
	{
		ships.Draw();
	}
};

class MegaField :public Figure
{
	Figure *field;


public:
	virtual void Draw();


};
void MegaField::Draw()
{



	//GameFieldImpl obj1(2, 2);

	Figure *background = new GameFieldImpl(2,2);
	background->Draw();
	//GameFieldImpl newG;
	//newG.Draw();

	Figure *background2 = new GameFieldImpl(width+10, 2);
	background2->Draw();

	//GameFieldImplEnemy newGE;
	//newGE.Draw();

};
int main()
{

	MegaField newG;
	newG.Draw();

	Figure *ship = new ShipImpl();
	ship->Draw();
	

	





	//Ship2 newS2;
	//newS2.Draw();

	/*GameFieldImpl newG;
	newG.Draw();
	SetXCoord newC;
	newC.Draw();

	SetYCoord newY;
	newY.Draw();



	ShipImpl newS;
	newS.Draw();*/
	
	COORD position;
	// ���������� ����������� ���������
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	position.X = 2;
	position.Y = height + 10;
	SetConsoleCursorPosition(hConsole, position);
	system("pause");
}
