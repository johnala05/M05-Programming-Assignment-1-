class binaryTreeType {
public:
    binaryTreeType();
    void insert(int item);
    int singleParent();

private:
    struct nodeType {
        int info;
        nodeType* left;
        nodeType* right;
    };

    nodeType* root;

    void insert(nodeType*& p, int item);
    int countSingleParent(nodeType* p);
};
