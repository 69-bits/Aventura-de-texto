#include "Jugador.h"
#include "Enemigo.h"

Jugador::Jugador()
{
  enemigo = new Enemigo("Pululu", 100);
}

Jugador::~Jugador()
{
  delete enemigo;
}

void Jugador::movimientoPersonaje(char _accion)
{

  if (_accion == 'S')
  {
    columnaActual--;
    if (columnaActual < 1) {
      cout << "No puedes avanzar aqui" << endl;
      columnaActual++;
      room.creacionCuarto(filaActual, columnaActual);
      
    }
    else if (filaActual == 1 && columnaActual == 2) {
      cout << "No puedes avanzar aqui" << endl;
      columnaActual++;
      room.creacionCuarto(filaActual, columnaActual);
     
    }
    else if (filaActual == 1 && columnaActual == 3) {
      cout << "No puedes avanzar aqui" << endl;
      columnaActual++;
      room.creacionCuarto(filaActual, columnaActual);
      
    }
    else if (filaActual == 2 && columnaActual == 3) {
      cout << "No puedes avanzar aqui" << endl;
      columnaActual++;
      room.creacionCuarto(filaActual, columnaActual);
      
    }
    else {
      room.creacionCuarto(filaActual, columnaActual);
      
    }
  }
  else if (_accion == 'W') {
    columnaActual++;
    if (columnaActual > 4) {
      cout << "No puedes avanzar aqui" << endl;
      columnaActual--;
      room.creacionCuarto(filaActual, columnaActual);
      
    }
    else if (filaActual == 2 && columnaActual == 2 && verificarItem < 1) {
      cout << "Parece que esta cerrada la puerta de este cuarto, pero tiene una cerradura" << endl;
      cout << "Que raro..." << endl;
      columnaActual--;
      room.creacionCuarto(filaActual, columnaActual);

    }
    else if (filaActual == 0 && columnaActual == 2 && verificarItem < 3) {
      cout << "Parece que esta cerrada la puerta de este cuarto, pero tiene una cerradura" << endl;
      cout << "Que raro..." << endl;
      columnaActual--;
      room.creacionCuarto(filaActual, columnaActual);

    }
    else if (filaActual == 0 && columnaActual == 3 && verificarItem < 4) {
      cout << "Parece que esta cerrada la puerta de este cuarto, pero tiene una cerradura" << endl;
      cout << "Que raro..." << endl;
      columnaActual--;
      room.creacionCuarto(filaActual, columnaActual);

    }
    else if (filaActual == 1 && columnaActual == 2) {
      cout << "No puedes avanzar aqui" << endl;
      columnaActual--;
      room.creacionCuarto(filaActual, columnaActual);
      
    }
    else if (filaActual == 1 && columnaActual == 3) {
      cout << "No puedes avanzar aqui" << endl;
      columnaActual--;
      room.creacionCuarto(filaActual, columnaActual);
      
    }
    else if (filaActual == 2 && columnaActual == 3) {
      cout << "No puedes avanzar aqui" << endl;
      columnaActual--;
      room.creacionCuarto(filaActual, columnaActual);
      
    }
    else {
      room.creacionCuarto(filaActual, columnaActual);
      
    }
  }
  else if (_accion == 'A') {
    filaActual--;
    if (filaActual < 0) {
      cout << "No puedes avanzar aqui" << endl;
      filaActual++;
      room.creacionCuarto(filaActual, columnaActual);
      
    }
    else if (filaActual == 0 && columnaActual == 1 && verificarItem < 2) {
      cout << "Intentaste pasara por este cuarto, pero un enemigo te intento atacar" << endl;
      cout << "Corriste rapido y cerraste la puerta, debes buscar algo con que atacarlo" << endl;
      filaActual++;
      room.creacionCuarto(filaActual, columnaActual);
    }
    /*else if (filaActual == 0 && columnaActual == 0 && verificarItem < 5) {
      cout << "Parece que esta cerrada la puerta de este cuarto, pero tiene una cerradura" << endl;
      cout << "Que raro..." << endl;
      filaActual++;
      room.creacionCuarto(filaActual, columnaActual);
    }*/
    else if (filaActual == 1 && columnaActual == 2) {
      cout << "No puedes avanzar aqui" << endl;
      filaActual++;
      room.creacionCuarto(filaActual, columnaActual);
      
    }
    else if (filaActual == 1 && columnaActual == 3) {
      cout << "No puedes avanzar aqui" << endl;
      filaActual++;
      room.creacionCuarto(filaActual, columnaActual);
      
    }
    else if (filaActual == 2 && columnaActual == 3) {
      cout << "No puedes avanzar aqui" << endl;
      filaActual++;
      room.creacionCuarto(filaActual, columnaActual);
      
    }
    else {
      room.creacionCuarto(filaActual, columnaActual);
      
    }
  }
  else if (_accion == 'D') {
    filaActual++;
    if (filaActual > 3) {
      cout << "No puedes avanzar aqui" << endl;
      filaActual--;
      room.creacionCuarto(filaActual, columnaActual);
      
    } 
    else if (filaActual == 1 && columnaActual == 4 && verificarItem < 5) {
      cout << "No puedes avanzar aqui, debes de responder la pregunta" << endl;
      filaActual--;
      room.creacionCuarto(filaActual, columnaActual);

    }
    else if (filaActual == 2 && columnaActual == 4 && verificarItem < 6) {
      cout << "No puedes avanzar aqui, debes de responder la pregunta" << endl;
      filaActual--;
      room.creacionCuarto(filaActual, columnaActual);

    }
    else if (filaActual == 3 && columnaActual == 4 && verificarItem == 7) {
      cout << "Entraste a la habitacion, una oveja gigante se presenta" << endl;
      cout << "Ves que la oveja tiene tu patito cuack cuak y decides atacar" << endl;
      cout << "Tu espada actual no es suficiente, decides huir y cerrar rapido la puerta" << endl;
      cout << "Creo que debes encontrar algo mas fuerte para vencerlo" << endl;
        // Iniciar el combate
      while (enemigo->getHealth() > 0 && getHealth() > 0)
      {
        // Turno del jugador
        attack(enemigo);

        // Verificar si el enemigo está derrotado
        if (enemigo->getHealth() <= 0)
        {
          cout << "Has derrotado al " << enemigo->getName() << ". ¡Enhorabuena!" << endl;
          // Puedes agregar lógica adicional aquí, como recompensas, etc.
          break;  // Salir del bucle de combate
        }

        // Turno del enemigo
        enemigo->attack(this);

        // Verificar si el jugador ha sido derrotado
        if (getHealth() <= 0)
        {
          cout << "¡Has sido derrotado! Fin del juego." << endl;
          // Puedes agregar más lógica aquí, como reiniciar el juego, etc.
          break;  // Salir del bucle de combate
        }
      }
      filaActual--;
      room.creacionCuarto(filaActual, columnaActual);

    }
    else if (filaActual == 1 && columnaActual == 2) {
      cout << "No puedes avanzar aqui" << endl;
      filaActual--;
      room.creacionCuarto(filaActual, columnaActual);
      
    }
    else if (filaActual == 1 && columnaActual == 3) {
      cout << "No puedes avanzar aqui" << endl;
      filaActual--;
      room.creacionCuarto(filaActual, columnaActual);
      
    }
    else if (filaActual == 2 && columnaActual == 3) {
      cout << "No puedes avanzar aqui" << endl;
      filaActual--;
      room.creacionCuarto(filaActual, columnaActual);
      
    }
    else {
      room.creacionCuarto(filaActual, columnaActual);
      
    }
  }
  else if (_accion == 'F') {
    inspeccionarCuarto(factory);
  }
  else if (_accion == 'G') {
    for (int i = 0; i < inventario.size(); i++)
    {
      cout << inventario[i] << endl;
    }
  }
  else {
    cout << "No es una accion valida" << endl;
    return;
  }
}

void Jugador::inspeccionarCuarto(factoriaItem& factory)
{
  if (filaActual == 2 && columnaActual == 1 && verificarItem == 0) {
    item* nuevaLlaveR = factory.crearItem();
    nuevaLlaveR->descripcion();
    inventario.push_back("Llave para el cuarto R");

    verificarItem = verificarItem + 1;
  }
  else if (filaActual == 2 && columnaActual == 2 && verificarItem == 1) {
    item* nuevaEspada1 = factory.crearItem();
    nuevaEspada1->descripcion();
    inventario.push_back("Espada nvl: 1");

    verificarItem = verificarItem + 1;
  }
  else if (filaActual == 0 && columnaActual == 1 && verificarItem == 2) {
    item* nuevaLlaveO = factory.crearItem();
    nuevaLlaveO->descripcion();
    inventario.push_back("Llave para el cuarto O");

    verificarItem = verificarItem + 1;
  }
  else if (filaActual == 0 && columnaActual == 2 && verificarItem == 3) {
    item* nuevaLlaveH = factory.crearItem();
    nuevaLlaveH->descripcion();
    inventario.push_back("Llave para el cuarto H");

    verificarItem = verificarItem + 1;
  }
  else if (filaActual == 0 && columnaActual == 4 && verificarItem == 4) {
    cout << " Responde esta pregunta para pasar al siguiente cuarto " << endl;
    cout << "QUe pasa si dos objetos se juntan " << endl;

    cin >> respuesta;
    if (respuesta == "Yes")
    {
      verificarItem = verificarItem + 1;
      cout << "Puedes pasar al siguiente cuarto" << endl;
    }
    else {
      cout << "Una lastima, no respondiste bien" << endl;
    }

  }
  else if (filaActual == 0 && columnaActual == 4 && verificarItem == 5) {
    cout << " Responde esta pregunta para pasar al siguiente cuarto " << endl;
    cout << "QUe pasa si dos objetos pepes se juntan " << endl;

    cin >> respuesta;
    if (respuesta == "No")
    {
      verificarItem = verificarItem + 1;
      cout << "Puedes pasar al siguiente cuarto" << endl;
    }
    else {
      cout << "Una lastima, no respondiste bien" << endl;
    }

  }
  else if (filaActual == 2 && columnaActual == 4 && verificarItem == 6) {
    item* nuevaEspada2 = factory.crearItem();
    nuevaEspada2->descripcion();
    inventario.push_back("Espada nvl: 2");

    verificarItem = verificarItem + 1;
  }
  else {
    cout << "No hay nada en este cuarto o incluso ya agarraste lo que habia aqui" << endl;
  }

}

void Jugador::attack(Enemigo*& _e)
{
  if (_e != nullptr)
  {
    int damage = -20;
    _e->setHealth(damage);

    cout << "El jugador atacó a " << _e->getName() << " y le restó " << damage << " puntos de vida" << endl;
  }
  else
  {
    cout << "No hay nada a que atacar" << endl;
  }
}


