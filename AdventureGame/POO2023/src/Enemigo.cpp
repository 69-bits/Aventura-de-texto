#include "Enemigo.h"
#include "Jugador.h"

void Enemigo::attack(Jugador* _p){
  if (_p != nullptr) {
    int m_da�o = -10;
    _p->setHealth(m_da�o);
    cout << "El " << m_nombre << " ataco al jugador y le quito" << m_da�o << " puntos de vida" << endl;
    cout << "Te queda " << _p->getHealth() << " de vida" << endl;
  }
  else {
    cout << "No hay nada que atacar" << endl;
  }
}