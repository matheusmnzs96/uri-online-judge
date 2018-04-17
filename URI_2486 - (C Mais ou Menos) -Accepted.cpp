/* 
 * author: Matheus Menezes
 * ICOMP, UFAM
 * Manaus, Brazil
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t, num_alimento, total_alimento;
    string alimento;
    
    while(true){
        cin >> t; // casos de teste
        
        if(t == 0){
            break;    
        }
        
        total_alimento = 0;
        
        for(int i = 0; i < t; i++){
            
            cin >> num_alimento;      // quantidade de alimento
            
            cin.ignore();  // limpando o buffer
            
            getline(cin, alimento);   // tipo de alimento
            
            if(alimento == "suco de laranja"){
                total_alimento += 120 * num_alimento;  
            
            }else if(alimento == "morango fresco"){
                total_alimento += 85 * num_alimento;
            
            }else if(alimento == "mamao"){
                total_alimento += 85 * num_alimento;
            
            }else if(alimento == "goiaba vermelha"){
                total_alimento += 70 * num_alimento;
            
            }else if(alimento == "manga"){
                total_alimento += 56 * num_alimento;
            
            }else if(alimento == "laranja"){
                total_alimento += 50 * num_alimento;
            
            }else if(alimento == "brocolis"){
                total_alimento += 34 * num_alimento;
            }
        }
        
        if(total_alimento > 130){
            cout << "Menos " << total_alimento - 130 << " mg" << endl; 
        
        }else if(total_alimento < 110){
            cout << "Mais " <<  110 - total_alimento << " mg" << endl;
        
        }else{
            cout << total_alimento << " mg" << endl;
        }
    }
}