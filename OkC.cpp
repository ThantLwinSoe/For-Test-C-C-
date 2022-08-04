#include<stdio.h>
void area();
int length = 20;
int width = 3;
int main() {

    printf("Lenth: %d ", length);
    printf("width: %d ", width);

    area();

    return 0;
}

void area() {

  //  int length = 10;
  //  int width = 5;
    int areaOfSomething = length * width;

  /*printf("Lenth: %d ", length);
    printf("width: %d ", width); */
    printf("This is Area: %d ", areaOfSomething);
}
