#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> pii;
vector<pair<int,int>> rutas [50];
const int INF = numeric_limits<int>::max();
vector<int> dist(50, INF);


void dijkstra(int start) {
    priority_queue<pii, vector<pii>, greater<pii> > pq;
    pq.push(make_pair(0, start)); 
    dist[start] = 0;
    while (!pq.empty()) {
        int current_node = pq.top().second;
        int current_distance = pq.top().first;
        pq.pop();
        if (current_distance > dist[current_node]) continue;
        for (int i = 0; i < rutas[current_node].size(); i++) {
            int next_node = rutas[current_node][i].second;
            int weight = rutas[current_node][i].first;
            int next_distance = current_distance + weight;
            if (next_distance < dist[next_node]) {
                dist[next_node] = next_distance;
                pq.push(make_pair(next_distance, next_node));
            }
        }
    }
}


void conexiones(){
    rutas[0] = {make_pair(3,1), make_pair(5,2), make_pair(5,6), make_pair(9,8)};
rutas[1] = {make_pair(3,3), make_pair(3,5)};
rutas[2] = {make_pair(5,4), make_pair(3,8)};
rutas[3] = {make_pair(3,1), make_pair(4,2)};
rutas[4] = {make_pair(4,3), make_pair(4,7), make_pair(3,8)};
rutas[5] = {make_pair(5,6), make_pair(3,7)};
rutas[6] = {make_pair(5,0), make_pair(5,5)};
rutas[7] = {make_pair(4,4), make_pair(3,5)};
rutas[8] = {make_pair(3,4), make_pair(9,0)};
}



int main(){
    
    std::cout << "----- Bienvenido al sistema de optimizacion de rutas de trabajo ----- " << std::endl;
    //dibujarGrafo();  Que salga en la consola la ruta que esta cargada
    std::cout << "Introduzca su posicion actual" << std::endl;
    int posicionInicial, posicionFinal;
    cin >> posicionInicial>>posicionFinal;
    std::cout << "Introduzca su destino" << std::endl;
    conexiones;
     cout << "Presiona cualquier tecla para iniciar: ";
    cin.ignore();
    cin.get();
    dijkstra(posicionInicial);
    cout <<dist[posicionFinal];
    
    
  
    
    
    
    

    return 0;
}

  
    
    
    
    

    return 0;
}
