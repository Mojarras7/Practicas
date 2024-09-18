#include <iostream>
#include <vector>

class ThreeConsecutiveNumbers
{
public:
   static bool threeConsecutiveOdds(std::vector<int> &arr){
    //&esto se usa para que trabaje con los valores y no cree una copia de ellos 
//static significa que puedes llamar a la funcion sin crear una instancia de la clase 
    int len = 0;
    for(int x: arr){
        if(x % 2 ==1){ //x % 2 = 1 // esto compara el binario de los numeros, por ejemplo  x = 00001 y si el ultimo es 1 es impar
            len ++;
             if(len == 3) {
                return true;
                }
        }else{
            len = 0;
        }
       
    };
    return false;
   }

};
int main(){
    std::vector<int> nums = {1,2,3,7,9};
    bool result = ThreeConsecutiveNumbers::threeConsecutiveOdds(nums);
    std::cout << "Hay tres numeros impares consecutivos? " << (result ? "Si" : "No") << std::endl; //? es un operador izquierdo es si true, derecho es si false
}


// C++ program to demonstrate the
// // above concept
// #include <iostream>
// using namespace std;

// // Driver Code
// int main()
// {
//     // x and z non-const var
//     int x = 5;
//     int z = 6;

//     // y and p non-const var
//     char y = 'A';
//     char p = 'C';

//     // const pointer(i) pointing
//     // to the var x's location
//     int* const i = &x;

//     // const pointer(j) pointing
//     // to the var y's location
//     char* const j = &y;

//     // The values that is stored at the memory location can
//     // modified even if we modify it through the pointer
//     // itself No CTE error
//     *i = 10;
//     *j = 'D';

//     // CTE because pointer variable
//     // is const type so the address
//     // pointed by the pointer variables
//     // can't be changed
//     // i = &z;
//     // j = &p;

//     cout << *i << " and " << *j << endl;
//     cout << i << " and " << j;

//     return 0;


