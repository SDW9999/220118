#pragma once

class Player // ������ Ÿ��
{
public:
	int HP;
	int MP;
	int Gold;

public:
	void Collect();
	void Move();
	void Attack();
	void Run();
};
