#include <iostream>
using namespace std;

const int height = 25;
const int width = 25;
int map[height][width];
int startpt[2] = { 25,25 };
int endpt[2] = {1, 1 };

void GenMap(int sizey, int sizex) {
	
	for (int i = 0; i < sizey; i++) 
	{
		for (int j = 0; j < sizex; j++) 
		{
			map[i][j] = rand() % 2;
		}
	}
	map[startpt[0]-1][startpt[1]-1] = 2;
	map[endpt[0]-1][endpt[1]-1] = 3;
}

float getDistance() {
	int disty = startpt[0] - endpt[0];
	int distx = startpt[1] - endpt[1];
	float dist = sqrt(pow(disty, 2) + pow(distx, 2));
	return dist;
}

void updateMap(int sizey, int sizex) {
	if
}

int main() {
	GenMap(height, width);
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			cout << map[i][j] << " ";
		}
		cout << endl;
	}
	cout << "distanse is =" << getDistance(height, width);

}