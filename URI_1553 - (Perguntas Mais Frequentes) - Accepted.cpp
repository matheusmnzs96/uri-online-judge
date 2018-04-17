// Created by Matheus Menezes on 2018-03-20

#include <iostream>

using namespace std;

int main(){
    
    int n_testes, k_frequencia, repete;
    
    while(true){
        
        cin >> n_testes >> k_frequencia;
        
        if(n_testes == 0 && k_frequencia == 0){
            break;
        }
        
        int perguntas[n_testes];
        
        // lendo as i-perguntas:
        for(int i = 0; i < n_testes; i++){
            cin >> perguntas[i];
        }
       
        // ordena o vetor:
        int aux;
        
        for(int i = 0; i < n_testes; i++){
            for(int j = i+1; j < n_testes; j++){
                if(perguntas[i] > perguntas[j]){
                    aux = perguntas[i];
                    perguntas[i] = perguntas[j];
                    perguntas[j] = aux;
                }
            }
        }
        
        // total perguntas que serao adicionadas
        int perguntas_add = 0;
        
        // verificando quantas vezes uma pergunta se repete
        for(int i = 0; i < n_testes; i++){
            repete = 0;
            
            for(int j = 0; j < n_testes; j++){
                
                if(perguntas[i] == perguntas[j]){
                    repete++;
                }
            }
            
            if(perguntas[i] != perguntas[i+1]){
                // caso a frequencia dessa pergunta seja considerada frequente (ou seja, maior ou igual a k_frequencia):
                if(repete >= k_frequencia){
                    perguntas_add++;    // entao adiciona essa pergunta
                }
            }
        }
        
        // exibindo a quantidade perguntas que serao adicionadas:
        cout << perguntas_add << endl;
        
    }
    
    return 0;
}