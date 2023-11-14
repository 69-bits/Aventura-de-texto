#include "Jugador.h"
#include "Enemigo.h"

Jugador::
Jugador(){
  enemigo = new Enemigo("Pululu", 100);
}

Jugador::
~Jugador(){
  delete enemigo;
}

void 
Jugador::movimientoPersonaje(char _accion){

  if (_accion == 'S')
  {
    m_columnaActual--;
    if (m_columnaActual < 1) {
      cout << "No puedes avanzar aqui" << endl;
      m_columnaActual++;
      room.creacionCuarto(m_filaActual, m_columnaActual);
      
    }
    else if (m_filaActual == 1 && m_columnaActual == 2) {
      cout << "No puedes avanzar aqui" << endl;
      m_columnaActual++;
      room.creacionCuarto(m_filaActual, m_columnaActual);
     
    }
    else if (m_filaActual == 1 && m_columnaActual == 3) {
      cout << "No puedes avanzar aqui" << endl;
      m_columnaActual++;
      room.creacionCuarto(m_filaActual, m_columnaActual);
      
    }
    else if (m_filaActual == 2 && m_columnaActual == 3) {
      cout << "No puedes avanzar aqui" << endl;
      m_columnaActual++;
      room.creacionCuarto(m_filaActual, m_columnaActual);
      
    }
    else {
      room.creacionCuarto(m_filaActual, m_columnaActual);
      
    }
  }
  else if (_accion == 'W') {
    m_columnaActual++;
    if (m_columnaActual > 4) {
      cout << "No puedes avanzar aqui" << endl;
      m_columnaActual--;
      room.creacionCuarto(m_filaActual, m_columnaActual);
      
    }
    else if (m_filaActual == 2 && m_columnaActual == 2 && m_verificarItem < 1) {
      cout << "Parece que esta cerrada la puerta de este cuarto, pero tiene una cerradura" << endl;
      cout << "Que raro..." << endl;
      m_columnaActual--;
      room.creacionCuarto(m_filaActual, m_columnaActual);

    }
    else if (m_filaActual == 0 && m_columnaActual == 2 && m_verificarItem < 3) {
      cout << "Parece que esta cerrada la puerta de este cuarto, pero tiene una cerradura" << endl;
      cout << "Que raro..." << endl;
      m_columnaActual--;
      room.creacionCuarto(m_filaActual, m_columnaActual);

    }
    else if (m_filaActual == 0 && m_columnaActual == 3 && m_verificarItem < 4) {
      cout << "Parece que esta cerrada la puerta de este cuarto, pero tiene una cerradura" << endl;
      cout << "Que raro..." << endl;
      m_columnaActual--;
      room.creacionCuarto(m_filaActual, m_columnaActual);

    }
    else if (m_filaActual == 1 && m_columnaActual == 2) {
      cout << "No puedes avanzar aqui" << endl;
      m_columnaActual--;
      room.creacionCuarto(m_filaActual, m_columnaActual);
      
    }
    else if (m_filaActual == 1 && m_columnaActual == 3) {
      cout << "No puedes avanzar aqui" << endl;
      m_columnaActual--;
      room.creacionCuarto(m_filaActual, m_columnaActual);
      
    }
    else if (m_filaActual == 2 && m_columnaActual == 3) {
      cout << "No puedes avanzar aqui" << endl;
      m_columnaActual--;
      room.creacionCuarto(m_filaActual, m_columnaActual);
      
    }
    else {
      room.creacionCuarto(m_filaActual, m_columnaActual);
      
    }
  }
  else if (_accion == 'A') {
    m_filaActual--;
    if (m_filaActual < 0) {
      cout << "No puedes avanzar aqui" << endl;
      m_filaActual++;
      room.creacionCuarto(m_filaActual, m_columnaActual);
      
    }
    else if (m_filaActual == 0 && m_columnaActual == 1 && m_verificarItem < 2) {
      cout << "Intentaste pasara por este cuarto, pero un mosco te intento atacar" << endl;
      cout << "Corriste rapido y cerraste la puerta, debes buscar algo con que atacarlo" << endl;
      m_filaActual++;
      room.creacionCuarto(m_filaActual, m_columnaActual);
    }
    /*else if (filaActual == 0 && columnaActual == 0 && verificarItem < 5) {
      cout << "Parece que esta cerrada la puerta de este cuarto, pero tiene una cerradura" << endl;
      cout << "Que raro..." << endl;
      filaActual++;
      room.creacionCuarto(filaActual, columnaActual);
    }*/
    else if (m_filaActual == 1 && m_columnaActual == 2) {
      cout << "No puedes avanzar aqui" << endl;
      m_filaActual++;
      room.creacionCuarto(m_filaActual, m_columnaActual);
      
    }
    else if (m_filaActual == 1 && m_columnaActual == 3) {
      cout << "No puedes avanzar aqui" << endl;
      m_filaActual++;
      room.creacionCuarto(m_filaActual, m_columnaActual);
      
    }
    else if (m_filaActual == 2 && m_columnaActual == 3) {
      cout << "No puedes avanzar aqui" << endl;
      m_filaActual++;
      room.creacionCuarto(m_filaActual, m_columnaActual);
      
    }
    else {
      room.creacionCuarto(m_filaActual, m_columnaActual);
      
    }
  }
  else if (_accion == 'D') {
    m_filaActual++;
    if (m_filaActual > 3) {
      cout << "No puedes avanzar aqui" << endl;
      m_filaActual--;
      room.creacionCuarto(m_filaActual, m_columnaActual);
      
    } 
    else if (m_filaActual == 1 && m_columnaActual == 4 && m_verificarItem < 5) {
      cout << "No puedes avanzar aqui, debes de responder la pregunta" << endl;
      m_filaActual--;
      room.creacionCuarto(m_filaActual, m_columnaActual);

    }
    else if (m_filaActual == 2 && m_columnaActual == 4 && m_verificarItem < 6) {
      cout << "No puedes avanzar aqui, debes de responder la pregunta" << endl;
      m_filaActual--;
      room.creacionCuarto(m_filaActual, m_columnaActual);

    }
    else if (m_filaActual == 3 && m_columnaActual == 4 && m_combateOcurridoEnHabitacion == false &&m_verificarItem == 7) {
      cout << "Entraste a la habitacion, una oveja gigante se presenta" << endl;
      cout << "Ves que la oveja tiene tu patito cuack cuak y decides atacar" << endl;
      cout << "Se burla de que solo cargas con un arma, por lo que decides mostrar la otra que llevas" << endl;
      cout << "Pululu se asusta y decide atacarte" << endl;
        
      while (enemigo->getHealth() > 0 && getHealth() > 0)
      {
        
        cout << "Es tu turno. Presiona J  para atacar: ";
        cin >> accionJugador;

        // Turno del jugador
        if (accionJugador == 'J') {
          attack(enemigo);
        }
        else {
          cout << "Accion no valida. Pierdes tu turno." << endl;
        }

        
        if (enemigo->getHealth() <= 0)
        {
          cout << "Has derrotado al " << enemigo->getName() << ". ¡Enhorabuena!" << endl;
          m_combateOcurridoEnHabitacion = true;
          room.creacionCuarto(m_filaActual, m_columnaActual);
          break;
        }

        enemigo->attack(this);

       
        if (getHealth() <= 0)
        {
          cout << "¡Has sido derrotado! Fin del juego." << endl;
          
          break;
        }
      }
      room.creacionCuarto(m_filaActual, m_columnaActual);

    }
    else if (m_filaActual == 1 && m_columnaActual == 2) {
      cout << "No puedes avanzar aqui" << endl;
      m_filaActual--;
      room.creacionCuarto(m_filaActual, m_columnaActual);
      
    }
    else if (m_filaActual == 1 && m_columnaActual == 3) {
      cout << "No puedes avanzar aqui" << endl;
      m_filaActual--;
      room.creacionCuarto(m_filaActual, m_columnaActual);
      
    }
    else if (m_filaActual == 2 && m_columnaActual == 3) {
      cout << "No puedes avanzar aqui" << endl;
      m_filaActual--;
      room.creacionCuarto(m_filaActual, m_columnaActual);
      
    }
    else {
      room.creacionCuarto(m_filaActual, m_columnaActual);
      
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

void 
Jugador::inspeccionarCuarto(factoriaItem& factory)
{
  if (m_filaActual == 2 && m_columnaActual == 1 && m_verificarItem == 0) {
    item* nuevaLlaveR = factory.crearItem();
    nuevaLlaveR->descripcion();
    inventario.push_back("Llave para el cuarto R");

    m_verificarItem = m_verificarItem + 1;
  }
  else if (m_filaActual == 2 && m_columnaActual == 2 && m_verificarItem == 1) {
    item* nuevaEspada1 = factory.crearItem();
    nuevaEspada1->descripcion();
    inventario.push_back("Espada nvl: 1");

    m_verificarItem = m_verificarItem + 1;
  }
  else if (m_filaActual == 0 && m_columnaActual == 1 && m_verificarItem == 2) {
    item* nuevaLlaveO = factory.crearItem();
    nuevaLlaveO->descripcion();
    inventario.push_back("Llave para el cuarto O");

    m_verificarItem = m_verificarItem + 1;
  }
  else if (m_filaActual == 0 && m_columnaActual == 2 && m_verificarItem == 3) {
    item* nuevaLlaveH = factory.crearItem();
    nuevaLlaveH->descripcion();
    cout << "El cuadro que viste se titula: El_beso. Curiosamente, tenia una llave" << endl;
    inventario.push_back("Llave para el cuarto H");

    m_verificarItem = m_verificarItem + 1;
  }
  else if (m_filaActual == 0 && m_columnaActual == 4 && m_verificarItem == 4) {
    cout << " Recoges el cuaderno, dice: responde esta pregunta para pasar al siguiente cuarto " << endl;
    cout << " Dame el nombre de un cuadro famoso, que yo solo conozco " << endl;
    cout << " ... no tiene sentido " << endl;

    cin >> m_respuesta;
    if (m_respuesta == "El_beso")
    {
      m_verificarItem = m_verificarItem + 1;
      cout << "Puedes pasar al siguiente cuarto, le atinaste al cuarto" << endl;
      cout << "Antes de irte, ves que el cuaderno le pertenece a un tal Gustav, pero de la nada, desaparece" << endl;
    }
    else {
      cout << "Una lastima, no respondiste bien" << endl;
    }

  }
  else if (m_filaActual == 1 && m_columnaActual == 4 && m_verificarItem == 5) {
    cout << " Recoges la hoja arrancada, dice: responde esta pregunta para pasar al siguiente cuarto " << endl;
    cout << "Pero la hoja tiene la respuesta, aunque algo cortada alacanzas a leer (...tav) " << endl;

    cin >> m_respuesta;
    if (m_respuesta == "Gustav")
    {
      m_verificarItem = m_verificarItem + 1;
      cout << "Puedes pasar al siguiente cuarto, perfecto!" << endl;
      cout << "Antes de irte, la nota dice algo sobre una arma que se puede combinar con otra..." << endl;
    }
    else {
      cout << "Una lastima, no respondiste bien" << endl;
    }

  }
  else if (m_filaActual == 2 && m_columnaActual == 4 && m_verificarItem == 6) {
    item* nuevaEspada2 = factory.crearItem();
    nuevaEspada2->descripcion();
    inventario.push_back("Espada nvl: 2");

    m_verificarItem = m_verificarItem + 1;
  }
  else {
    cout << "No hay nada en este cuarto o incluso ya agarraste lo que habia aqui" << endl;
  }

}

void 
Jugador::attack(Enemigo*& _e){
  if (_e != nullptr){
    int m_daño = -20;
    _e->setHealth(m_daño);

    cout << "El jugador ataco a " << _e->getName() << " y le resto " << m_daño << " puntos de vida" << endl;
  }
  else{
    cout << "No hay nada a que atacar" << endl;
  }
}


