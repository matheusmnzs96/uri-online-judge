/*
 * Created by Matheus Menezes on 2018-02-23
 */

#include <iostream>

using namespace std;

int main(){
    
    int n, i, cont_queda = 0, posicao;
    cin >> n;
    
    int r[n];
    
    for(i = 0; i < n; i++){
        cin >> r[i];
    }
    
    for(i = 0; i < n; i++){
        
        if(r[i] < r[i-1]){
            cont_queda++;
            posicao = i;
            break;
        }
    }
    
    if(cont_queda > 0){
        cout << posicao+1 << endl;
    }else{
        cout << "0" << endl;
    }
    
    return 0;
}