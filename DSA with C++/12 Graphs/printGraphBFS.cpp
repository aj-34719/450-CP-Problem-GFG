// take vertices and edges input and print it in Depth first search (DFS)

#include<bits/stdc++.h>
using namespace std;

void print(int **edges, int n, int sv, bool* visited){

    cout << sv << endl;
    visited[sv] = true;

    for(int i=0; i<n; i++){
        if(sv == i)
           continue;
        if(edges[sv][i] && !visited[i])
           print(edges,n,i,visited);   
    }
}

/*

5
6
0 1
0 2
1 2
4 2
4 0
0 3

0
1
2
4
3


*/
int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif

    int vertices; cin >> vertices;
    int e; cin >> e;
    int** edges = new int*[vertices];

    for(int i=0; i<vertices; i++){
        edges[i] = new int[vertices];
        for(int j=0; j<vertices; j++)
          edges[i][j] = 0;
    }
     
    for(int i=0; i<e; i++){
        int s, e;
        cin >> s >> e;
        edges[s][e] = 1;
        edges[e][s] = 1;
    } 
    
    bool* visited = new bool[vertices];
    for(int i=0; i<vertices; i++)
     visited[i] =  false;

    print(edges,vertices,0,visited);


    for(int i=0; i<vertices; i++)
       delete [] edges[i];

    delete [] edges;

    delete [] visited;   

     return 0;

}