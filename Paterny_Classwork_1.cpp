#include <iostream> 
#include <vector>
#include <string>
using namespace std;



												////////////////////////////////
												////                        ////
												////    ABSTRACT FACTORY    ////
												////						////
												////////////////////////////////



/*
////////////
/// Hero ///
////////////
class Hero {
public:
	void virtual defense() = 0;
};


class Knight : public Hero{
public:
	void defense() override {
		cout << "Knight defense.\n";
	}
};

class Archer : public Hero {
public:
	void defense() override {
		cout << "Archer defense.\n";
	}
};


/////////////
/// Enemy ///
/////////////
class Enemy {
public:
	virtual void attack() = 0;
};


class Goblin : public Enemy {
public:
	void attack() override {
		cout << "Goblin attack.\n";
	}
};

class Witch : public Enemy {
public:
	void attack() override {
		cout << "Witch attack.\n";
	}
};


///////////////////
/// GameFactory ///
///////////////////
class GameFactory {
public:
	virtual Hero* createHero() = 0;
	virtual Enemy* createEnemy() = 0;
};


class FantasyGameFactory : public GameFactory {
public:
	Hero* createHero() override {
		Hero* hero = new Knight();
		return hero;
	};

	Enemy* createEnemy() override {
		Enemy* enemy = new Goblin();
		return enemy;
	};
};

class ScientificFantasyGameFactory : public GameFactory {
public:
	Hero* createHero() override {
		Hero* hero = new Archer();
		return hero;
	};


	Enemy* createEnemy() override {
		Enemy* enemy = new Witch();
		return enemy;
	};
};


/////////////
/// Gamer ///
/////////////
class Gamer {
	GameFactory* gFactory;

public:
	Gamer(GameFactory* _gFactory)
		: gFactory(_gFactory) {}

	void CreateHero()
	{
		Hero* hero = gFactory->createHero();
		hero->defense();
	};

	void CreateEnemy()
	{
		Enemy* enemy = gFactory->createEnemy();
		enemy->attack();
	}
};


int main()
{
	GameFactory* gFactory1 = new FantasyGameFactory();
	GameFactory* gFactory2 = new ScientificFantasyGameFactory();


	Gamer gamer1(gFactory1);
	Gamer gamer2(gFactory2);


	gamer1.CreateHero();
	gamer1.CreateEnemy();

	gamer2.CreateHero();
	gamer2.CreateEnemy();


}*/








														/////////////////////////
														////                 ////
														////    SINGLETON    ////
														////				 ////
														/////////////////////////


/*




class Singleton {
private:
	Singleton() {};

	vector<string> loggs;
public:
	static Singleton& getInstance()
	{
		static Singleton instance;
		return instance;
	}

	void log(const string Inf)
	{
		loggs.push_back(Inf);
	}

	vector<string> getLogs()
	{
		return loggs;
	}
};


void printLoggs(vector<string>logEntries)
{
	cout << "\n\n\tLoggs: \n";
	for (int i = 0; i < logEntries.size(); i++)
	{
		cout << "\tLog " << i + 1 << ": " << logEntries[i] << "\n";
	}
}


int main()
{

	Singleton& logger = Singleton::getInstance();


	logger.log("Error: Failed to read the file.");
	logger.log("Information: Datas downloaded from server.");

	vector<string> logEntries = logger.getLogs();

	printLoggs(logEntries);

	Singleton& logger2 = Singleton::getInstance();



	printLoggs(logger2.getLogs());
}*/









												//////////////////////////
												////                  ////
												////     BUILDER      ////
												////		          ////
												//////////////////////////


/*
#include "Builder.h"

#include "SMS_Builder.h"
#include "Email_Builder.h"

#include "Email_Message.h"
#include "SMS_Message.h"




void printVector(vector<string> vec) {

	string* p = vec.data();

	cout << "E-Mail Message: \n\t";
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << "\n\t";
	}
}



int main()
{
	Builder* builder = new Email_Builder();

	builder->buildHeader();
	builder->buildText();
	builder->buildText();
	builder->buildFooter();

	Message* message = builder->build();

	printVector(message->getResult());
}*/
