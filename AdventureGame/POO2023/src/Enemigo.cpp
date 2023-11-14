#include "Enemigo.h"
#include "Jugador.h"

void Enemigo::attack(Jugador* _p)
{
  if (_p != nullptr) {
    int damage = -10;
    _p->setHealth(damage);
    cout << "El " << m_name << " ataco al jugador y le quito" << damage << " puntos de vida" << endl;
  }
  else {
    cout << "No hay nada que atacar" << endl;
  }
}