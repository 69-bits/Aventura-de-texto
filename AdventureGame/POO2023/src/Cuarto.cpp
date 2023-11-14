#include "Cuarto.h"

void Cuarto::creacionCuarto(int _fila, int _columna)
{
  vector<vector<string>> Room(5, vector<string>(5, ""));
  Room[1][1] = "Estas en el lobby [L], tienes dos caminos: izquierda[N] y derecha[B]"
    " El cuarto esta totalmente vacio, la atmosfera esta bastante calido";

  Room[0][1] = "Te encuentras en el cuarto[N], tienes dos caminos: subir[O] y derecha[L]"
    " El cuarto esta lleno de piedras en el suelo, incluso piensas que se ven falsas";

  Room[2][1] = "Estas en el cuarto[B], tienes dos caminos: izquierda[L] y arriba[R]"
    " El cuarto solo contiene la funda de una llave, tirada en el suelo, suena inspeccionable";

  Room[2][2] = " Estas en el cuarto[R], tienes un solo camino: bajar[B]"
    " Hay un esqueleto tirado en una esquina, te resulta interesante.";

  Room[0][2] = "Estas en el cuarto[O], tienes dos caminos: bajar[N] y subir[H]"
    " El cuarto tiene una cama y un cuadro con un texto interante";

  Room[0][3] = "Estas en el cuarto[H], tienes dos caminos: bajar[O] y subir[J]"
    " El cuarto tiene una puerta con varias cerraduras, decides llamarle gran puerta";

  Room[0][4] = "Estas en el cuarto[J], tienes dos caminos: bajar[H] y derecha[F]"
    " El cuarto tiene un cuaderno tirado y una puerta con simbolos raros";

  Room[1][4] = "Estas en el cuarto[F], tienes dos caminos: izquierda[J] y derecha[A]"
    " El cuarto contiene una hoja arrancada tirada en el suelo y una puerta con simbolos raros";

  Room[2][4] = "Estas en el cuarto[A], tienes dos caminos: izquierda[F] y derecha[P]"
    " El cuarto tiene una atmosfera fuerte, sientes frio, tal vez estes cerca de la salida";

  Room[3][4] = "Todo se vuelve oscuro, la oveja yace en el suelo"
    " El patito cuack cuack esta alegre de verte, ya pueden salir de esta mazmorras"
    " Todo termino...              por ahora";

    cout << Room[_fila][_columna] << endl;

}
