 #include <iostream>

 using namespace std;
 int lengthOfLastWord(string s) {
        // int count = 0;
        // int esp = 0;
        // for(int i = 0; i <= s.size(); i++){
        //     if(s[i] == ' '){
        //       esp = i;
        //     }
        // };
        // for(int i = esp + 1; i< s.size(); i++){
        //     count ++;
        // }
        // return count; 

        //esta bien pero en el momento en que hay un espacio al final no cuenta 

        //intento haciendo que contar las letras y si hay un espacio al final empezar a contar otra vez, pero si no hay una letra dejarlo asi 
        int count = 0;
        int finalcount = 0;
        for(int i =0; i<s.size(); i++){
            if(s[i] != ' '){
                count ++;
                if(s[i + 1 ] == ' '){   
                     finalcount = count;
                }
               finalcount = count; 
            }else count = 0;
        };
        return finalcount;
    };



    int main(){
        cout << lengthOfLastWord("   fly me   to   the moon  ") << endl;
        cout << lengthOfLastWord("Luffy is still joyboy");
        return 0;
    }