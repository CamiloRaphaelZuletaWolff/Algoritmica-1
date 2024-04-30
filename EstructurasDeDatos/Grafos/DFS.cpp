#include<bits/stdc++.h>

using namespace std;

bool vis[10000];
vector<int> grafo[10000];
int niveles[10000];

void dfs (int nodoInicial) {
    stack <int> pila;  // se crea la pila
    pila.push(nodoInicial); // se mete el nodo inicial a la pila
    while(!pila.empty()){ // Se repetira este proceso hasta que la pila este vacia
        int nodoActual = pila.front(); // obteniene el primer elemento de la pila
        pila.pop(); // y se saca el primer elemeto 
        if(!vis[nodoActual]) { // pregunta si el nodo ya fue visitado
          vis[nodoActual] = true; // Marca como visitado al nodo actual 
            for(int i = 0; i < grafo[nodoActual].size(); i++ ){
                int amigo = grafo[nodoActual][i]; // vecino 
                niveles[amigo] = niveles[nodoActual] + 1;
                if(!vis[amigo]) { // El vecino no ha sido visitado 
                    pila.push(amigo);
                } 
            }  // todo el for se encarga de visitar los amigos del nodo actual   
        }
    }
}

// main se encarga de crear el grafo 
int main() {
    int nodos, aristas;
    cin>>nodos>>aristas; // 11 19
    for(int i = 0 ; i < aristas; i++ ) {
        int nodoInicial, nodoFinal;
        cin>>nodoInicial>>nodoFinal;
        grafo[nodoInicial].push_back(nodoFinal);
    }
    int nodo;
    cin >> nodo;
    dfs(nodo);
}
