#include "adjacency_list.h"

void Graph::insert_edge(int x, int y) {
    edgenode *p = new edgenode;

    p->weight = 0;
    p->y = y;
    p->next = edges[x];

    edges[x] = p;
    degree[x]++;
    nedges++;
}

void Graph::print() {

    int i;
    edgenode *p;

    for(i =1; i< nvertices; i++){
        std::cout << i << ":";
        p = edges[i];

        while (p != nullptr) {
            std::cout << " " << p-> y;
            p = p->next;
        }
        std::cout << std::endl;
    }

}
