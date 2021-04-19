#include<iostream>
#include<vector>
#include <Windows.h>



using namespace std;

struct Monster
{
	string name;
	int hp;
	int mp;
	int att;
	int exp;
	int gold;
	bool isAlive = true;

	
	bool isDead()
	{
		return isAlive;
	}

	
	void killed(bool live)
	{
		isAlive = !live;
	}
};

struct Player
{
	string name;
	int hp = 50;
	int mp = 50;
	int lvl = 1;
	int att = 5;
	int mAtt = 0;
	int exp = 0;
	int maxHp = 50;
	int maxMp = 50;
	int maxExp = 30;
	int gold = 10;

	void setPlayerName(string _name) //이름변경
	{
		name = _name;
	}

	void printMyStat(Player& p1)
	{

		cout << name << "  레벨  " << lvl << "		 HP  " << maxHp << " / " << hp << "  MP  " << maxMp << " / " << mp << "  EXP  " << maxExp << " / " << exp << "  금전  " << gold << " 골드" << endl;
	}
	void motel(Player& p1)
	{
		hp = maxHp;
		mp = maxMp;
		gold = gold - 2;
	}
	void selectHg(Monster& mob)
	{



		//mob1.maxHp = rand() % 30 + 21;

	}
	void monsterMeet(vector<Monster>& choboHg)
	{

	}

	void selectFight(vector<Monster>& choboHg)
	{
		


		int count = 10000;
		int randomNum = rand() % choboHg.size();

		
		int select;
		Player p1;
		system("CLS");
		cout << "〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓" << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "		[1]	";
		while (choboHg[randomNum].isDead() == false)
		{
			randomNum = rand() % choboHg.size();
			count--;

			if (count < 0)
			{
				cout << "    " << endl;
				return;
			}
		}
		cout << choboHg[randomNum].name;

		cout <<" 와 싸우기 " << endl;
		cout << "		[2]	도망가기 " << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		printMyStat(p1);
		cout << "〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓■ 선택 : ";
		cin >> select;





	}
	void mainMenu(Player& p1);

	void selectHg(vector<Monster>& choboHg) // 사냥터 정하기
	{
		Player p1;
		vector<Monster> mobList;
		Monster daram = { "다람쥐",rand() % 20 + 10,20,rand() % 5 + 1,rand() % 10 + 10,rand() % 5 + 5 };// 이름 체력 마력 공격력 겸치 골드
		Monster kingDaram = { "다람쥐왕",rand() % 100 + 100,50,rand() % 5 + 5,rand() % 50 + 50,rand() % 50 + 50 };
		//mobList.push_back(daram);
		//mobList.push_back(kingDaram);
		for (int i = 0; i < 1; i++)
		{
			mobList.push_back(kingDaram);
			for (int j = 100; i < j; j--)
			{
				mobList.push_back(daram);
			}

		}
		int select;
		system("CLS");
		cout << "〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓" << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "		[1]	왕초보사냥터(추천레벨 Lv1~Lv5) " << endl;
		cout << "		[2]	돌아가기 " << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		p1.printMyStat(p1);
		cout << "〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓■ 선택 : ";
		cin >> select;
		switch (select)
		{
		case 1:
			//p1.selectFight(mobList);
		case 2:
			mainMenu(p1);
			break;
		}
	}



};



void town(Player& p1);
void mainMenu(Player& p1);
void selectHg(Player &p1);


void startGame() // 게임 시작 화면
{
	cout << "〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓" << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "		[1]	새 게임 시작하기 " << endl;
	cout << "		[2]	모험을 그만하기 " << endl;
	cout << endl;
	cout << endl;
	cout << endl;


	cout << endl;
	cout << "〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓■ 선택 : ";
}
void reSelect() // 잘못된 번호 입력
{
	cout << "〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓" << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "		잘못된 번호를 입력하였습니다. " << endl;
	cout << "		다시 선택해주세요. " << endl;
	cout << endl;
	cout << endl;
	cout << endl;


	cout << endl;
	cout << "〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓■ 선택 : ";
}
void town(Player& p1) //마을안 활동
{

	int select;

	cout << "〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓" << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "		[1]	여관 이용(체력,마력 전부회복) : 2 골드 " << endl;
	cout << "		[2]	돌아가기 " << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	p1.printMyStat(p1);
	cout << "〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓■ 선택 : ";
	cin >> select;
	
	switch (select) 
	{
	case 1: 
		p1.motel(p1);
		mainMenu(p1);
		break;
	case 2: 
		mainMenu(p1);
		break;
	
	}
	
	


}
void mainMenu(Player& p1)
{
	Monster mob1;
	int select;
	system("CLS");
	cout << "〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓" << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "		[1]	마을 가기 " << endl;
	cout << "		[2]	사냥터 입장 " << endl;
	cout << "		[3]	인벤토리 " << endl;
	cout << "		[4]	상점" << endl;
	cout << "		[5]	카지노 입장 " << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	p1.printMyStat(p1);
	cout << "〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓■ 선택 : ";
	cin >> select;
	switch (select) {
	case 1: //마을
		town(p1);
		break;
	case 2: //사냥터
		p1.selectHg(mob1);
		break;
	case 3: //인벤토리
		break;
	case 4: //상점
		break;
	case 5: //카지노
		break;
	default:
		reSelect();
		Sleep(1000);
		break;
	}
}
	
	/*void selectHg(vector<Monster>& choboHg) // 사냥터 정하기
	{
		Player p1;
		vector<Monster> mobList;
		Monster daram = { "다람쥐",rand() % 20 + 10,20,rand() % 5 + 1,rand() % 10 + 10,rand() % 5 + 5 };// 이름 체력 마력 공격력 겸치 골드
		Monster kingDaram = { "다람쥐왕",rand() % 100 + 100,50,rand() % 5 + 5,rand() % 50 + 50,rand() % 50 + 50 };
		//mobList.push_back(daram);
		//mobList.push_back(kingDaram);
		for (int i = 0; i < 1; i++)
		{
			mobList.push_back(kingDaram);
			for (int j = 100; i < j; j--)
			{
				mobList.push_back(daram);
			}

		}
		int select;
		system("CLS");
		cout << "〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓" << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "		[1]	왕초보사냥터(추천레벨 Lv1~Lv5) " << endl;
		cout << "		[2]	돌아가기 " << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		p1.printMyStat(p1);
		cout << "〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓■ 선택 : ";
		cin >> select;
		switch (select)
		{
		case 1 :
			//p1.selectFight(mobList);
		case 2:
			mainMenu(p1);
			break;
		}
	}*/	
	
	
	
	
	
	
	
	
	


enum class Start{newPlayer=1,outGame};
void newPlayer(Player &p1)
{
	system("CLS");
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	cout << "			닉네임을 입력하시오" << endl;
	cout << endl;
	cout << "			NAME : ";

	string name;
	cin >> name;
	p1.setPlayerName(name);
	
	
}



int main()
{
	srand(time(NULL));
	Player p1;
	Start startEnum;
	int select;
	//Monster daram = { "다람쥐",rand()%20+10,20,rand()%5+1,rand()%10+10,rand()%5+5 };// 이름 체력 마력 공격력 겸치 골드
	//Monster kingDaram = { "다람쥐왕",rand() % 100 + 100,50,rand() % 5 + 5,rand() % 50 + 50,rand() % 50 + 50 };
	//vector<Monster> mobList;
	////mobList.push_back(daram);
	////mobList.push_back(kingDaram);
	//for (int i = 0; i <1; i++)
	//{
	//	mobList.push_back(kingDaram);
	//	for (int j = 100; i < j; j--)
	//	{
	//		mobList.push_back(daram);
	//	}
	//
	//}
	
	
	//startGame();
	//
	//startEnum = (Start)(select);
	
	
	bool menuSelect = true;
	while (menuSelect)
	{
		
		startGame();
		cin >> select;
		startEnum = (Start)(select);
		switch (startEnum)
		{
		case Start::newPlayer:
			newPlayer(p1);
			menuSelect = false;
			break;
			
		case Start::outGame:
			exit(0);
			break;
		default:
			reSelect();
			Sleep(1000);
			system("CLS");
			break;
		}
		
	}
	
	mainMenu(p1);
	
	//switch (select) {
	//case 1: //마을
	//	town(p1);
	//	break;
	//case 2: //사냥터
	//	break;
	//case 3: //인벤토리
	//	break;
	//case 4: //상점
	//	break;
	//case 5: //카지노
	//	break;
	//}

	
	

	
	
}