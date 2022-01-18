#pragma once

// private - 캡슐화

class Player // 데이터 타입
{
private:
	int HP;
	int MP;
	int Gold;

public:
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
