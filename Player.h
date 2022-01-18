#pragma once

class Player // 데이터 타입
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
