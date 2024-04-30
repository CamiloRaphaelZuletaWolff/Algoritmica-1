#include<bits/stdc++.h>

using namespace std;


int main() {
    int numNodos, numAristas;;
    cin >> numNodos>> numAristas; // Obtener el número de nodos y aristas del grafo.
    vector<int> grafo[numNodos]; // Crea la estructura del grafo
    for (int i = 0; i < numAristas; i++) {
        int nodoOrigen, nodoDestino;
        cin >> nodoOrigen >> nodoDestino; 
        grafo[nodoOrigen].push_back(nodoDestino); // Añade el nodo destino al grafo en la posicion nodoOrigen
        // Esto es dirigido, para hacerlo no dirigido tenemos que añadir 
        grafo[nodoDestino].push_back(nodoOrigen);
    }
}
