#include <iostream>
#include "ListaPuntatori.cpp"
template <typename T>
class Coda {
private:
    ListaPuntatori<T> lista;

public:
    // Inserire un elemento alla fine della coda
    void enqueque(T valore) {
       lista.inslista(valore, lista.lunghezza()+1);
    }

    // Rimuovi un elemento in testa alla coda e lo restituisce
    T dequeque() {
        T elem=lista.leggilista(1);
        lista.canclista(1);
        return(elem);
    }

    // Restituisce il valore in testa alla coda senza rimuoverlo
    T front() {
          return(lista.leggilista(1));
    }

    // Restituisce true se la coda è vuota altrimenti false
    bool isEmpty(){
      return(lista.listavuota());
    }
    // Restituisce il numero di elementi nella coda
    int size(){
      return(lista.lunghezza());
    }
};
