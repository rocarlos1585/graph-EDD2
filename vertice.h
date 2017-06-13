//
// Created by robert on 6/12/17.
//

#ifndef GRAPH_EDD2_VERTICE_H
#define GRAPH_EDD2_VERTICE_H


#include <string>
#include <iostream>



class Vertice{

protected:
    std::string name;
    int numberVertices;

public:
    Vertice(){}

    Vertice(std::string x){
        name = x;           //aqui inicializo el nombre y numero del vertice
        numberVertices = -1;
    }

    Vertice(std::string x, int n){
        name = x;
        numberVertices = n;
    }

    std::string returnVerticeName(){
        return name;        //retorna el nombre del vertice
    }

    void changeVerticeName(std::string name2){
        name = name2;       //cambia el nombre del vertice
    }

    bool equals(Vertice n){
        return name == n.name;
    }

    void changeVerticeNumber(int n){
        numberVertices = n; //cambia el numero del vertice
    }

    int returnVerticeNumber(){
        return numberVertices;  //retorna el numero del vertice
    }
};

#endif //GRAPH_EDD2_VERTICE_H
