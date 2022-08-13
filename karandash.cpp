#include <iostream>
#include <vector>
using namespace std;


class Levitation  {
public:
	virtual void get_name() = 0;
	void levitation() {
		cout << "I'm levitating\n";
	}
};

class SuperStronger  {
public:
	virtual void get_name() = 0;
	void supersronger() {
		cout << "I'm sronger\n";
	}
};

class SuperSpeed  {
public:
	virtual void get_name() = 0;
	void superspeed(){
		cout << " I am sppeding\n" << std::endl;
	}
};

class Cybernetics {
public:
	virtual void get_name() = 0;
	void cibernetics() {
		cout << "I'm Cyborg\n";
	}
};

class Armor {
public:
	virtual void get_name() = 0;
	void cibernetics() {
		cout << "I have armor\n";
	}
};

class LaserVision  {
public:
	virtual void get_name() = 0;
	void laservision() {
		cout << "I have laser vision\n";
	}
};


class Positive {
public:
	virtual void get_name() = 0;
	void good()  {
		cout << "I'm posive hero\n";
	}
};

class Negative {
public:
	virtual void get_name() = 0;
	void bad() {
		cout << "I'm negative hero\n";
	}
};




class Batman :  public SuperStronger, public Armor, public Positive {
public:
	void get_name() override {
		cout << "I'm Batman\n";
	}
};

class Superman : public SuperStronger, public Levitation, public Positive, public LaserVision, public SuperSpeed {
public:
	void get_name() override {
		cout << "I'm Superman\n";
	}
};

class Darkside : public SuperStronger, public Levitation, public Negative, public LaserVision {
public:
	void get_name() override {
		cout << "I'm  Darkside\n";
	}
};

class Flash :  public SuperSpeed, public Positive {
public:
	void get_name() override {
		cout << "I'm Flash\n";
	}
};

class Cyborg :  public SuperStronger, public Levitation, public Cybernetics, public Positive {
public:
	void get_name() override {
		cout << "I'm Cyborg\n";
	}
};

int main()
{
	vector<Levitation*> heroes_levitation;
	heroes_levitation.push_back(new Superman);
	heroes_levitation.push_back(new Darkside);
	heroes_levitation.push_back(new Cyborg);

	for (auto& i : heroes_levitation) {
		i->get_name();
		i->levitation();
		cout << "\n\n";
	}

	vector<Positive*> positiv_heroes;
	positiv_heroes.push_back(new Batman);
	positiv_heroes.push_back(new Superman);
	positiv_heroes.push_back(new Flash);
	positiv_heroes.push_back(new Cyborg);

	for (auto& i : positiv_heroes) {
		i->get_name();
		i->good();
		cout << "\n\n";
	}
}