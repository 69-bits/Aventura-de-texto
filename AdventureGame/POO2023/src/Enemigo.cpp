#include "Enemigo.h"
#include "Jugador.h"

void Enemigo::attack(Jugador* _p){
  if (_p != nullptr) {
    int m_daño = -10;
    _p->setHealth(m_daño);
    cout << "El " << m_nombre << " ataco al jugador y le quito" << m_daño << " puntos de vida" << endl;
    cout << "Te queda " << _p->getHealth() << " de vida" << endl;
  }
  else {
    cout << "No hay nada que atacar" << endl;
  }
}