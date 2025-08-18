#include <stdio.h>
#include <stdbool.h> //introduces boolean type true or false
#include <math.h> //math library

//Structures -> used to combine related data to a var

struct Position { //good practice to Capitalise structs to know that it is a type
  int x;
  int y;
}

//alternative declaration to reduce typing

struct typedef {
  int x;
  int y;
} Position;

int main(void){
  Position a;
  a.x = 5;
  a.y = 10;

  Position b = {.x =5, .y = 10}
}

//Conditionals

if (<expression>) {
  //IMPORTANT !!! in C, true: anything that is not equal to 0
  //statements to execute
}

else {
  //statements to execute when if-condition is not met
}

//logical operators
// $$ -> AND
// || -> OR
// == -> EQUAL
// != -> NOT EQUAL

//DOUBLE VALUES CANNOT BE USED TO DO COMPARISON

//How to use Floating-Point Equality

int main(void){
  a = 0.1 + 0.2;
  b = 0.3;

  if (fabs(a-b), 1e-5){ // number parameter, accuracy of double  
    //execute statement
  }

}
