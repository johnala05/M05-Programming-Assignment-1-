#include <iostream>
#include "binaryTreeType.h"
using namespace std;

void testCase(initializer_list<int> values) {
    binaryTreeType tree;
    for (int v : values)
        tree.insert(v);

    cout << "Values inserted: ";
    for (int v : values) cout << v << " ";
    cout << "\nSingle-parent nodes: "
         << tree.singleParent() << "\n\n";
}

int main() {
    cout << "Test Case 1:\n";
    testCase({50, 30, 70, 20, 40, 60, 80});

    cout << "Test Case 2:\n";
    testCase({50, 30, 70, 20, 60});

    cout << "Test Case 3:\n";
    testCase({10, 20, 30, 40});

    return 0;
}
