#include "bfs.h"
#include "queue.h"
#include "adjacency_list.h"

void BreadthFirstSearch::doSearch(Graph *g, int start) {
    initSearch(g->nvertices);

    bfs(g, start);
}

void BreadthFirstSearch::initSearch(int vertices) {

    for (int i = 1; i < vertices; i++) {
        processed[i] = discovered[i] = false;
        parent[i] = -1;
    }
}


void BreadthFirstSearch::bfs(Graph *g, int start) {

    Queue q;
    int current_v;
    int successor_v;
    edgenode *current_edges;

    q.enqueue(start);
    q.print();
    discovered[start] = true;

    while(q.queueSize() > 0) {
        current_v = q.dequeue();
        process_vertex_early(current_v);
        processed[current_v] = true;

        current_edges = g->edges[current_v];

        while(current_edges != nullptr) {
           successor_v = current_edges->y;

            if((!processed[successor_v])) {
                process_edge(current_v, successor_v);
            }

            if(!discovered[successor_v]) {
                q.enqueue(successor_v);
                discovered[successor_v] = true;
                parent[successor_v] = current_v;
            }

            current_edges = current_edges->next;
        }

        process_vertex_late(current_v);
    }
}


void BreadthFirstSearch::process_vertex_early(int v) {
    std::cout << "processed: " << v << std::endl;
}

void BreadthFirstSearch::process_vertex_late(int v) {
}

void BreadthFirstSearch::process_edge(int current_v, int successor_v) {
    std::cout << "processed edge: " << current_v
    <<  " - " <<  successor_v << std::endl;
}
