#pragma once

#define MAXV 1000

#include <iostream>

struct edgenode {
    int y;
    int weight;
    edgenode *next;
};


class Graph {
public:

    edgenode *edges[MAXV+1];
    int degree[MAXV+1];
    int nvertices;
    int nedges;

    Graph() {

        int i;
        nvertices = 0;
        nedges = 0;

        for(i=1; i<=MAXV; i++) { degree[i] = 0; }
        for(i=1; i<=MAXV; i++) { edges[i] = nullptr; }
    }

    void insert_edge(int x, int y);
    void print();
};

