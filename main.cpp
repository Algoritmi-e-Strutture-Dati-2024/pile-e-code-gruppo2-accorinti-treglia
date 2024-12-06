#include <iostream>
#include "ListaPuntatori.cpp"
#include "Pila.cpp"
#include "Coda.cpp"
using namespace std;

int main() {
    
    // Creazione della pila
    Pila<T> Pila1;
    // Inserisce alcuni elementi nella pila
    Pila1.push(10);
    Pila1.push(20);
    Pila1.push(5);
    // Stampa i valori della pila
    cout << "Elemento alla posizione 1: " << Pila1.leggilista(1) << endl;
    cout << "Elemento alla posizione 2: " << Pila1.leggilista(2) << endl;
    cout << "Elemento alla posizione 3: " << Pila1.leggilista(3) << endl;
    // Cancella un elemento dalla pila
    Pila1.pop();
    // Stampa i valori della pila dopo la cancellazione
    cout << "Dopo la cancellazione, elemento alla posizione 1: " << Pila1.leggilista(1) << endl;
    cout << "Dopo la cancellazione, elemento alla posizione 2: " << Pila1.leggilista(2) << endl;
    // Ottieni il valore in cima alla pila senza rimuoverlo
    cout << "L'elemento in cima alla pila è " << Pila1.top() << endl;
    // Restituire true se la pila è vuota altrimenti false
    Pila1.isEmpty();
    // Restituisce il numero di elementi nella pila
    Pila1.size();
    
    -------------------------------------------------------------------------------------------------
        
    // Creazione della coda
    Coda<T> Coda1;
    // Inserisce alcuni elementi nella coda
    Coda1.enqueque(10);
    Coda1.enqueque(20);
    Coda1.enqueque(5);
    // Stampa i valori della coda
    cout << "Elemento alla posizione 1: " << Coda1.leggilista(1) << endl;
    cout << "Elemento alla posizione 2: " << Coda1.leggilista(2) << endl;
    cout << "Elemento alla posizione 3: " << Coda1.leggilista(3) << endl;
    // Cancella un elemento dalla coda
    Coda1.dequeque();
    // Stampa i valori della coda dopo la cancellazione
    cout << "Dopo la cancellazione, elemento alla posizione 1: " << Pila1.leggilista(1) << endl;
    cout << "Dopo la cancellazione, elemento alla posizione 2: " << Pila1.leggilista(2) << endl;
    // Ottieni il valore in cima alla testa della coda senza rimuoverlo
    cout << "L'elemento in cima alla pila è " << Coda1.front() << endl;
    // Restituire true se la coda è vuota altrimenti false
    Coda1.isEmpty();
    // Restituisce il numero di elementi nella pila
    Coda1.size(); 
    
    return 0;
}

double valuta_polacca(Coda<T> Coda2){    
    
}

