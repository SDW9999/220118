#pragma once

// private - ĸ��ȭ

class Player // ������ Ÿ��
{
private:
	int HP;
	int MP;
	int Gold;

public:
	// ������ (accessor)
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
