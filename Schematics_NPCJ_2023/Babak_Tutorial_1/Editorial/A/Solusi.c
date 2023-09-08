#include <stdio.h>

#include <math.h>


int main () {

    int input, jmldigit, digit1, digit2, digit3, digit4, ans;

    scanf("%d", &input);


    if (trunc(input/10) == 0){

        jmldigit = 1;

    } else if (trunc(input/100) == 0){

        jmldigit = 2;

    } else if(trunc(input/1000) == 0){

        jmldigit = 3;

    } else if(trunc(input/10000) == 0){

        jmldigit = 4;

    }


    if (jmldigit == 1){

        digit1 = input;

    } else if (jmldigit == 2){

        digit1 = input/10;                                          

        digit2 = input%10;

    } else  if(jmldigit == 3){

        digit1 = input/100;

        digit2 = (input%100)/10;

        digit3 = input%10;

    } else if (jmldigit == 4){

        digit1 = input/1000;

        digit2 = (input%1000) / 100;

        digit3 = (input%100) / 10;

        digit4 = input % 10;

    }


    if (jmldigit == 1){

        ans = pow(digit1, jmldigit);

    } else if (jmldigit == 2){

        ans = pow(digit1, jmldigit) + pow(digit2, jmldigit);

    } else if (jmldigit == 3){

        ans = pow(digit1, jmldigit) + pow(digit2, jmldigit) + pow(digit3, jmldigit);

    } else if (jmldigit == 4){

        ans = pow(digit1, jmldigit) + pow(digit2, jmldigit) + pow(digit3, jmldigit) + pow(digit4, jmldigit);

    }


    if (ans == input){

        printf("Pisi!\n");

    } else {

        printf("Nitnot!\n");

    }

}