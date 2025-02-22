#include <iostream>
#include <algorithm>
#include <queue>
#include <set>
using namespace std;

enum DIR { UP, RIGHT, DOWN, LEFT, DIRMAX };
enum SEASON { SPRING, SUMMER, AUTUMN, WINTER };

struct Pos
{
	int x, y;

	bool operator==(const Pos p) const {
		return (x == p.x && y == p.y);
	}

	bool operator!=(const Pos p) const {

		return !(x == p.x && y == p.y);
	}

};

//바이러스 구조체
struct Virus
{
	Pos pos; //위치
	bool isAcitve; //활성화 상태
};

int arr[50][50];
vector<Virus> vVirus;
//0 : 빈칸, 1 : 벽, 2 : 바이러스 
enum
{
	BLANK,
	WALL,
	INACTIVEVIR,
	ACTIVEVIR
};

int main()
{
	ios::sync_with_stdio(false);  
	cin.tie(0); cout.tie(0);

	int size;
	int count;

	cin >> size;
	cin >> count;

	//바이러스 정보 받아오는 부분
	for (int y = 0; y < size; y++)
	{
		for (int x = 0; x < size; x++)
		{
			cin >> arr[y][x];
			if (arr[y][x] == 2)
			{
				Virus tv;
				tv.pos.x = x;
				tv.pos.y = y;
				tv.isAcitve = false;
				//바이러스 정보는 따로 Vecter에 보관한다.
				vVirus.push_back(tv);
			}
			
		}
	}


	//메인 로직
	for (int y = 0; y < size; y++)
	{
		for (int x = 0; x < size; x++)
		{

		}
	}






	return 0;
}

//상하좌우의 빈칸으로 이동
int virFunc(int depth, Pos pos)
{
	arr[pos.y][pos.x] = ACTIVEVIR;
	if (arr[pos.y + 1][pos.x] == BLANK) virFunc(depth + 1, { pos.x, pos.y + 1 });
	if (arr[pos.y][pos.x + 1] == BLANK) virFunc(depth + 1, { pos.x + 1, pos.y });
	if (arr[pos.y - 1][pos.x] == BLANK) virFunc(depth + 1, { pos.x, pos.y - 1 });
	if (arr[pos.y][pos.x - 1] == BLANK) virFunc(depth + 1, { pos.x - 1, pos.y });
	return depth;
}



