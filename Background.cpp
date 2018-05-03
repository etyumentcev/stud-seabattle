#include<iostream>
#include <stdlib.h>
using namespace std;
/*
std::std;
std::initializer_list
std::initializer_list<figure*>figures;
*/
bool gameOver;
const int width = 30;
const int height = 30;
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

int main()
{
	

	
		GameFieldImpl newG;
		newG.Draw(); 
		
		
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