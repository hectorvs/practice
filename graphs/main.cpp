#include "adjacency_list.h"
#include "bfs.h"

int main(int argc, char ** argv) {
   Graph g;
   BreadthFirstSearch bfs;

   g.nvertices = 7;

   g.insert_edge( 1, 2);
   g.insert_edge( 1, 6);
   g.insert_edge( 1, 5);

   g.insert_edge( 2, 1);
   g.insert_edge( 2, 3);
   g.insert_edge( 2, 5);

   g.insert_edge( 3, 2);
   g.insert_edge( 3, 4);

   g.insert_edge( 4, 3);
   g.insert_edge( 4, 5);

   g.insert_edge( 5, 4);
   g.insert_edge( 5, 2);
   g.insert_edge( 5, 1);

   g.insert_edge( 6, 1);

   g.print();

   bfs.doSearch(&g, 1);

   return 0;
}