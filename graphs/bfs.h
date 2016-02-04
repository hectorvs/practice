#pragma once

#include "adjacency_list.h"

class BreadthFirstSearch {

    bool processed[MAXV + 1];
    bool discovered[MAXV + 1];
    int parent[MAXV + 1];

public:

    void doSearch(Graph *g, int start);

private:

    void initSearch(int vertices);

    void bfs(Graph *g, int start);

    void process_vertex_early(int v);
    void process_vertex_late(int v);
    void process_edge(int current_v, int successor_v);
};

