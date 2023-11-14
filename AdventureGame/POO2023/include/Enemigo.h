#include "Commons.h"

class Jugador;

class Enemigo
{
public:
	Enemigo() = default;
	Enemigo(string _name, int _health) :m_name(_name), m_health(_health) {};
	~Enemigo() = default;

	void
		attack(Jugador* _p);

	void
		setHealth(int _h) {
		m_health += _h;
	}

	int getHealth() {
		return m_health;
	}

	string
		getName() {
		return m_name;
	}

private:
	int m_health = 100;
	string m_name;
};