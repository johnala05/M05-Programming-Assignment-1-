#include "binaryTreeType.h"
#include <iostream>
using namespace std;

binaryTreeType::binaryTreeType() {
    root = nullptr;
}

void binaryTreeType::insert(int item) {
    insert(root, item);
}

void binaryTreeType::insert(nodeType*& p, int item) {
    if (p == nullptr) {
        p = new nodeType{item, nullptr, nullptr};
    }
    else if (item < p->info)
        insert(p->left, item);
    else
        insert(p->right, item);
}

int binaryTreeType::singleParent() {
    return countSingleParent(root);
}

int binaryTreeType::countSingleParent(nodeType* p) {
    if (p == nullptr)
        return 0;

    int left = countSingleParent(p->left);
    int right = countSingleParent(p->right);

    bool oneChild =
        (p->left == nullptr && p->right != nullptr) ||
        (p->left != nullptr && p->right == nullptr);

    return (oneChild ? 1 : 0) + left + right;
}
