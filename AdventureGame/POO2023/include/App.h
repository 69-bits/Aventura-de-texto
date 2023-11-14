#include "Commons.h"
#include "Jugador.h"


class App
{
public:
	App() = default;
	~App() = default;
	Jugador jugador;
	void menuJugador();

private:
	char accion;
};

