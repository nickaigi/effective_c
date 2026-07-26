#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct person {
  char *name;
  int age;

} Person;

void salutePerson(Person *);
Person *initPerson(char *, int);

int main(int argc, char *argv[]) {
  Person *nick = initPerson("Nickson", 37);
  salutePerson(nick);
  return 0;
}

Person *initPerson(char *name, int age) {
  Person *pPerson = malloc(sizeof(Person));
  pPerson->name = malloc(50 * sizeof(char));
  strcpy(pPerson->name, name);
  pPerson->age = age;
  return pPerson;
}

void salutePerson(Person *pPerson) {
  printf("Hello %s\n", pPerson->name);
  printf("Salute on your %d years on earth\n", pPerson->age);
}
