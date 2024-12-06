#include <iostream>
#include "ListaPuntatori.cpp"
template <typename T>
class Pila {
private:
    ListaPuntatori<T> lista;

public:
    // Inserire un eemento nella pila
    void push(T valore) {
       lista.inslista(valore, 1);
    }

    // Rimuovi un elemento dalla pila
    T pop() {
        T elem=lista.leggilista(1);
        lista.canclista(1);
        return(elem);
    }

    // Ottieni il valore in cima alla pila senza rimuoverlo
    T top() {
          return(lista.leggilista(1));
    }

    //restituisce true se la pila è vuota altrimenti false
    bool isEmpty(){
      return(lista.listavuota());
    }
    //restituisce il numero di elementi nella pila
    int size(){
      return(lista.lunghezza());
    }
};
