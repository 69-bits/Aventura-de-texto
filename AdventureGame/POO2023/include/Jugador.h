#include "Commons.h"
#include "Cuarto.h"


class Enemigo;

class Jugador
{
private:
	vector<string> inventario;
	Enemigo* enemigo;
	int filaActual = 1;
	int columnaActual = 1;
	int m_health = 100;
	string respuesta;
	bool combateOcurridoEnHabitacion = false;

public:
	Jugador();
	~Jugador();
	int verificarItem = 0;
	Cuarto room;
	ConcreteFactoriaLlave factory;
	void movimientoPersonaje(char _accion);
	void inspeccionarCuarto(factoriaItem& factory);

	void 
		attack(Enemigo*& _e);
	void
		setHealth(int _h) {
		m_health += _h;
	}
	int getHealth() {
		return m_health;
	}
};

