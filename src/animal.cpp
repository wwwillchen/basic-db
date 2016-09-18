#include "animal.h"

Animal::Animal() {
  m_age = 10;
  m_male = true;
}

int Animal::age() { return m_age; }

bool Animal::male() { return m_male; }