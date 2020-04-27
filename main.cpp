
//int map[5][8]
//
//void generatemap(int m[][]; int sizex; int sizey) 
//{
//
//}
//
//
//
//int main() 
//{
//	generate map
//}
//#include <iostream>
//using namespace std;
//
//void Setup();
//void Draw();
//void Input();
//void Logic();
//
//bool gameover;
//const int height = 10;
//const int width = 20;
//int x, y, endx, endy, score;
//enum eDirection {STOP = 0, LEFT, RIGHT, UP, DOWN};
//eDirection dir;
//
//int main() {
//	
//	Setup();
//	
//	while (!gameover)
//	{
//		Draw();
//		Input();
//		Logic();
//	}
//
//	return 0;
//}
//
//void Setup() {
//	gameover = false;
//	dir = STOP;
//	x = width / 2;
//	y = height / 2;
//	endx = rand() % width;
//	endy = rand() % height;
//	score = 0;
//}
//
//void Draw() {
//	system("cls");
//	for (int i = 0; i < width; i++)
//		cout << "#";
//	cout << endl;
//
//	for (int j = 0; j < height; j++)
//	{
//		for (int i = 0; i < width; i++)
//		{
//			if ((i > 0) && (i < 19))
//				cout << " ";
//			else
//				cout << "#";
//		}
//		cout << endl;
//	}
//	for (int i = 0; i < width; i++)
//		cout << "#";
//	cout << endl;
//}
//
//void Input() {
//
//}
//
//void Logic() {
//
//}