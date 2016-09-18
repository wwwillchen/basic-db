#ifndef ANIMAL_H_
#define ANIMAL_H_

class Animal {
 public:
  Animal();
  int age();
  bool male();

 private:
  int m_age;
  bool m_male;
};

#endif  // ANIMAL_H_