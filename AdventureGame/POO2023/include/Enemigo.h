#include "Commons.h"

class 
	Jugador;

class 
	Enemigo{
public:
	Enemigo() = default;
	Enemigo(string _name, int _health) :m_nombre(_name), m_salud(_health) {};
	~Enemigo() = default;

	void
		attack(Jugador* _p);

	void
		setHealth(int _h) {
		m_salud += _h;
	}

	int getHealth() {
		return m_salud;
	}

	string
		getName() {
		return m_nombre;
	}

private:
	int m_salud = 100;
	string m_nombre;
};