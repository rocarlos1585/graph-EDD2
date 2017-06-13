//
// Created by robert on 6/12/17.
//

#ifndef GRAPH_EDD2_GRAPHMATRIZ_H
#define GRAPH_EDD2_GRAPHMATRIZ_H

#include <iostream>
#include "vertice.h"

typedef int * matrizDimension;  //dimension de la matriz

class graphMatriz{

protected:
    int maximumVertices;        //numero maximo de vertices
    int actualVerticesNumber;   //numero de vertices actual
    Vertice * vertices;         //arreglo de vertices
    int ** matrizAdyacencia;    //matriz de adyacencia

public:
    graphMatriz(int max){

        maximumVertices = max;

        vertices = new Vertice[max]; //vector de vertices
        matrizAdyacencia = new matrizDimension[max];    //vector de punteros
        actualVerticesNumber = 0;

        for(int i=0; i<max; i++){ matrizAdyacencia[i] = new int[max]; /*matriz de adyacencia*/}
    }

    graphMatriz(){
        maximumVertices = 1;
        graphMatriz(maximumVertices);
    }

    int returnNumberOfVertice(){return actualVerticesNumber;}
    void changeNumberOfVertice(int n){actualVerticesNumber = n;}

    int numVertice(std::string v){

        int i;
        bool found = false;
        for(i=0; (i<actualVerticesNumber) && !found;){
            found = vertices[i].equals(v);
            if(!found){i++;}
        }
        return(i<actualVerticesNumber) ? i : -1; //el operador ternario devuelve -1 si encuentra el vertice en el array
    }



    void newVertice(std::string newNAme){
        bool is = numVertice(newNAme) >= 0;
        if(!is){
            Vertice v =  Vertice(newNAme, actualVerticesNumber);
            vertices[actualVerticesNumber++]=v;

        }

    }

private:
//metodos privados
};

#endif //GRAPH_EDD2_GRAPHMATRIZ_H
