#include<bits/stdc++.h>

using namespace std;
int main() {
    int numNodos, numAristas;;
    cin >> numNodos>> numAristas; // Obtener el número de nodos y aristas del grafo.
    int grafo[numNodos][numNodos]; // Crea la estructura del grafo
    for (int i = 0; i < numAristas; i++) {
        int nodoOrigen, nodoDestino;
        cin >> nodoOrigen >> nodoDestino; 
        grafo[nodoOrigen][nodoDestino] = 1; // Un 1 en la matriz implica una conexion entre esos nodos
        // Esto es dirigido, para hacerlo no dirigido tenemos que añadir 
        grafo[nodoDestino][nodoOrigen];
    }
}
