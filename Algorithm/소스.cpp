#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

struct Index
{
	int x, y;
};

enum Dir { RIGHT, UP, LEFT, DOWN };
enum { BLANK, CAM1, CAM2, CAM3, CAM4, CAM5, BLOCK };

int dir_x[] = { 1,0,-1,0 };
int dir_y[] = { 0,-1,0,1 };

int Board[8][8];
int maxY;
int maxX;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> maxY;
	cin >> maxX;

	for (int y = 0; y < maxY; y++)
	{
		for (int x = 0; x < maxX; x++)
		{
			cin >> Board[y][x];
		}
	}


}


