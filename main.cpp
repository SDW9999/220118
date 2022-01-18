#include <iostream>
#include "Player.h"
#include "Slime.h"
#include "Goblin.h"
#include "WildBoar.h"
using namespace std;

int main()
{
	Player NewPlayer; // 메모리에 생성되면 인스턴스(오브젝트)라고 함
	
	NewPlayer.SetHP(-100); // -100으로 넣어서 무결성
	int CurrentHP = NewPlayer.GetHP();

	


	return 0;
}