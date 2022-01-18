#pragma once
#include <iostream>
using namespace std;

// private - 캡슐화

class Player // 데이터 타입
{
private:
	int HP;
	int MP;
	int Gold;

public:
	Player() // 기본 생성자 (constructor)
	{
		cout << "플레이어 생성" << endl;
	}


	~Player() // 소멸자, 파괴자 (destructor)
	{
		cout << "플레이어 사라짐" << endl;
	}

	// 접근자 (accessor)
	void SetHP(int NewHP)
	{
		if (NewHP >= 0)
		{
			HP = NewHP;
		}
	}
	int GetHP() const
	{
		return HP;
	}
	void Collect();
	void Move();
	void Attack();
	void Run();
};
