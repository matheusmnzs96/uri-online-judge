/* 
 * author: Matheus Menezes
 * 02-2018
 */
#include <iostream>
#include <string>

using namespace std;

int main(){
    
    int n, i, j, letra;

    // palavra que sera lida
    string palavra;
    
    while(getline(cin, palavra)){
        
        // quantidade n de letras que serao lida
        cin >> n;
        
        // lendo as letras
        for(i = 0; i < n; i++){
            cin >> letra;
            
            // imprimo a letra da palavra informada da posicao letra-1
            cout << palavra[letra-1];
        }
        
        cout << endl;
        
        getline(cin, palavra);
    }
    
    return 0;
}