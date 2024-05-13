#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> pii;
vector<pair<int,int>> rutas (50);
const int INF = numeric_limits<int>::max();
vector<int> dist(50, INF);


void dijkstra(int start) {
    priority_queue<pii, vector<pii>, greater<pii> > pq; // Min-heap para obtener el mínimo peso rápidamente
    pq.push(make_pair(0, start)); // Iniciamos con el nodo de inicio
    dist[start] = 0;

    while (!pq.empty()) {
        int current_node = pq.top().second;
        int current_distance = pq.top().first;
        pq.pop();

        // Si la distancia actual no es relevante, la saltamos
        if (current_distance > dist[current_node]) continue;

        // Revisamos los nodos adyacentes
        for (int i = 0; i < adj[current_node].size(); i++) {
            int next_node = adj[current_node][i].second;
            int weight = adj[current_node][i].first;
            int next_distance = current_distance + weight;

            // Actualizamos la distancia si encontramos un camino más corto
            if (next_distance < dist[next_node]) {
                dist[next_node] = next_distance;
                pq.push(make_pair(next_distance, next_node));
            }
        }
    }
}


void conexiones(){
    rutas[0] = {make_pair(1,1)};
    
}



int main(){
    
    std::cout << "----- Bienvenido al sistema de optimizacion de rutas de trabajo ----- " << std::endl;
    //dibujarGrafo();  Que salga en la consola la ruta que esta cargada
    std::cout << "Introduzca su posicion actual" << std::endl;
    int posicion;
    cin >> posicion;
    conexiones;
     cout << "Presiona cualquier tecla para ingresar al menu: ";
    cin.ignore();
    cin.get();
    
  
    
    
    
    

    return 0;
}
