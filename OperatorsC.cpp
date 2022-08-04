#include<stdio.h>

void arOper();
void showMeHax();

int main() {

    arOper();
    showMeHax();
    return 0;
}

void arOper() {

    int i= 10, j=5;
    float a =20.0, b = 5.0;

    printf("This is ArOPerator!!");
    printf("++++++++++++++++++++++\n");

    printf("Add: %d \n", i+j);
    printf("Sub: %d \n", i-j);
    printf("Muti: %d \n", i*j);
    printf("Div: %f \n", a/b);
    printf("Remainder: %d \n", i%j);

}

void showMeHax() {

    int i = 100;
    char c = 'H';
    float f = 10.89;

    printf("Show Me Haxadecimal \n");
    printf("================== \n");

    
    printf("%c = %d = %x \n", c,c,c);
   // printf("%f = %x \n", f,f);

}