#include <stdio.h>
#include <stddef.h> //header for library to use size_t variable type for arrays

//ARRAYS
double costs[5]; //defines an array called costs containing 5 values, each of type double

char x = 'A'; //character type must use single quotations

double costs[var]; //Variable Lenght arrays -> not recommended

double costs[] = {8.0, 4.0, 4.0, 7.77} //do not need to define array size as it is assumed by the number or vars declared

double costs[5] = {0}; //all 5 elements are initialised at 0

//writing value to an array
costs[0] = 8.88; //sets the value 0 offset from the array
costs[4] = 1.2; //sets the value of the last element of the array (array size -1)

//size_t: unsigned type that is guaranteed to be large enough to index any array, use by defaullt for array indices unless negative values are needed

void print_doublearr_index(double arr[], size_t index){ //do not declare any array size when declaring as a function argument
  printf("%f\n", arr[index])
}

//how to manage array lengths, C does not have any operator to find the length of an array (array is modified directly), hence the length must be passed as an argument

//C DOES NOT MAKE A COPY OF AN ARRAY, IS NOT A PASS-BY-VALUE WHEN CALLED IN THE FUNCTION
void print_last_element(double arr[], size_t length){
  printf("%f\n", arr[length - 1]); //prints last element of the array
}

//Arrays and Strucs
typedef struct Position {
  int x;
  int y;
} Position;

int main(void){
  Position positions[2] = {0}; //all members of the struc is set to 0
}

//LOOPS

while (expression){
  //executed code until expression is false to exit the loop
}

//iterate through an array 
void print_arr(double arr[], size_t length) { 
  size_t i = 0;
  while(i < length){
    printf("%f\n", arr[i]);
    printf("%f\n", arr[length - 1 - i]); //reverse order iteration
    i += 1;
  }
}

//Do-While loop
int main() {
    int number;
    
    // This loop will keep asking until the user enters a positive number
    do {
        printf("Enter a positive number: ");
        scanf("%d", &number);
    } while (number <= 0);

    printf("You entered: %d\n", number);

    return 0;
}

for (expression){
  //executed code
}

//for loop version of array iteration
for (size_t i = 0; i < length; ++i){
  //execute code
}

//INCREMENT AND DECREMENT OPERATORS

//commonly used
i += 1; //add one
i -= 1; //minus one
++i; //pre-increment -> uses the current value of i BEFORE increasing the value of i by 1
i++; //post-increment -> uses the value of i AFTER increasing the value of i by 1

//OTHER FUNCTIONS FOR LOOPS
break; //automatically exits the loop 
continue; //skips the current iteration of the loops and goes to the next (acts as a bypass)
