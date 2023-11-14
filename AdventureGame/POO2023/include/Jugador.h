#include "Commons.h"
#include "Cuarto.h"
#include "Item.h"


class 
	Enemigo;

class 
	Jugador
{
public:
	Jugador();
	~Jugador();

	int m_verificarItem = 0;
	bool m_combateOcurridoEnHabitacion = false;

	Cuarto 
		room;
	ConcreteFactoriaLlave 
		factory;
	void 
		movimientoPersonaje(char _accion);
	void 
		inspeccionarCuarto(factoriaItem& factory);

	void 
		attack(Enemigo*& _e);
	void
		setHealth(int _h) {
		m_salud += _h;
	}
	int getHealth() {
		return m_salud;
	}
private:
	vector<string> inventario;
	Enemigo* enemigo;
	int m_filaActual = 1;
	int m_columnaActual = 1;
	int m_salud = 100;
	char accionJugador;
	string m_respuesta;

};

