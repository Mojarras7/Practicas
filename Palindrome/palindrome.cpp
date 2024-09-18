#include <iostream>
#include <vector>
bool isPalindrome(int x){
    
    if(x < 0) return false;

    int temp = x;

    std::vector<int> array;

    while(temp > 0){
        array.push_back(temp%10);
        temp /= 10;
    }

    for(int i = 0; i < array.size() /2 ; i ++){
        if(array[i] != array[array.size() - 1 -i]){
            return false;
        }
    }
    return true;

//     for(int i= num - 1 ; i>=0; i--){
//         arrayR[i]= x%10;
//         std::cout << arrayR[i];
//         x /= 10;
//     };

//     for(int i = 0; i < num / 2; i++){ // /2 porque solo ocupa comparar la mitad del numero para determinar si es palindromo o no
//         if(arrayR[i] != arrayR[num - 1 - i]){ // aqui se esta haciendo un ciclo para comparar pero uno inicia desde el final 
//             return false;
//         }
//     }  
//    return true;

};



int main(){
    bool result = isPalindrome(121); 
    std::cout << "El numero ingresado " << (result ? "Si" : "No") << " es palindromo" << std::endl;
    return 0;
}