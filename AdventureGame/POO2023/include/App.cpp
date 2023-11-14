#include "App.h"

void App::menuJugador()
{
  cout << "Estas en el lobby [L], tienes dos caminos: izquierda[N] y derecha[B]"
    " El cuarto esta totalmente vacio, la atmosfera esta bastante calido" << endl;

  while (accion != 'T')
  {
    cout << "           J--------F---------A---------P" << endl;
    cout << "           | " << endl;
    cout << "           | " << endl;
    cout << "           H " << endl;
    cout << "           | " << endl;
    cout << "           | " << endl;
    cout << "           O                 R" << endl;
    cout << "           |                 |" << endl;
    cout << "           |                 |" << endl;
    cout << "           N--------L--------B" << endl;
    cout << "Estas son tus acciones, seleccina a tu favor" << endl;
    cout << " [W]: Subir" << endl;
    cout << " [S]: Bajar" << endl;
    cout << " [A]: Ir a la izquierda" << endl;
    cout << " [D]: Ir a la derecha" << endl;
    cout << " [F]: Inspeccionar area" << endl;
    cout << " [G]: Revisar inventario y estadistica" << endl;
    cin >> accion;
    jugador.movimientoPersonaje(accion);

  }

  cout << "Puntaje final: " << jugador.verificarItem << endl;
}
