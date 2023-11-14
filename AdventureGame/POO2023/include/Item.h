#include "Commons.h"

class
  item
{
public:
  virtual
    void
    descripcion() = 0;
};

class
  factoriaItem
{
public:
  virtual
    item*
    crearItem() = 0;
};


class
  Objeto : public item
{
public:
  void
    descripcion() override {
    cout << " Encontraste un objeto, felicidades. Revisa tu inventario seguido " << endl;
  }
};

class
  ConcreteFactoriaLlave : public factoriaItem {
public:
  item*
    crearItem() override {
    return new Objeto();
  }
};
