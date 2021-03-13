// ............. Implimentation of Tree using class ............
#include <vector>
using namespace std;

template <typename T>

class treeNode{
    public:
      T data;
      vector <treeNode*> children;   // OR , vector <treeNode <T>* > children;

    treeNode(T data){
        this->data = data;
    }

  
    // ........... Destructor for deleting tree .............
    
    ~treeNode(){
      
      for(int i=0; i<children.size(); i++)
          delete children[i];
    }

   
};