#include<bits/stdc++.h>

using namespace std;

bool vis[10000];
vector<int> grafo[10000];
int niveles[10000];

void bfs (int nodoInicial) {
    queue<int> colita;  // se crea la cola
    colita.push(nodoInicial); // se mete el nodo inicial a la cola
    while(!colita.empty()){ // Se repetira este proceso hasta que la cola este vacia
        int nodoActual = colita.front(); // obteniene el primer elemento de la cola
        colita.pop(); // y se saca el primer elemeto 
        if(!vis[nodoActual]) { // pregunta si el nodo ya fue visitado
            vis[nodoActual] = true; // Marca como visitado al nodo actual 
            for(int i = 0; i < grafo[nodoActual].size(); i++ ){
                int amigo = grafo[nodoActual][i]; // vecino 
                niveles[amigo] = niveles[nodoActual] + 1;
                if(!vis[amigo]) { // El vecino no ha sido visitado 
                    colita.push(amigo);
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
    bfs(nodo);
}
