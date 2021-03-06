// class for Binary Search Tree .........

using namespace std;

template <typename T>
class BST{
    public:

    T data;
    BST<T>* left;
    BST<T>* right;

    BST(T data){
        this -> data = data;
        left = NULL;
        right = NULL;
    }

    ~BST(){
        delete left;
        delete right;
    }

};
