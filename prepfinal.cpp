#include <iostream>
#include <queue>

struct Node {
  int data;
  Node* left;
  Node* right;
};

Node* createNode(int data) {
  Node* newNode = new Node;
  newNode->data = data;
  newNode->left = nullptr;
  newNode->right = nullptr;
  return newNode;
}

Node* insertNode(Node*& root, int data) {
  Node* newNode = createNode(data);

  if (root == nullptr) {
    root = newNode;
    return root;
  }

  std::queue<Node*> queue;
  queue.push(root);

  while (!queue.empty()) {
    Node* current = queue.front();
    queue.pop();

    if (current->left== NULL) {
      current->left = newNode;
      return root;
    } else {
      queue.push(current->left);
    }

    if (current->right == NULL) {
      current->right = newNode;
      return root;
    } else {
      queue.push(current->right);
    }
  }
}
void preOrderTraversal(Node* root) {
  std::queue<Node*> queue;

  if (root) {
    queue.push(root);
  }

  while (!queue.empty()) {
    Node* current = queue.front();
    queue.pop();

    std::cout << current->data << " ";

    if (current->right) {
      queue.push(current->right);
    }

    if (current->left) {
      queue.push(current->left);
    }
  }
}

void inOrderTraversal(Node* root) {
  std::queue<Node*> queue;
  Node* current = root;

  while (current || !queue.empty()) {
    while (current) {
      queue.push(current);
      current = current->left;
    }

    if (!queue.empty()) {
      current = queue.front();
      queue.pop();
      std::cout << current->data << " ";
      current = current->right;
    }
  }
}

void postOrderTraversal(Node* root) {
  std::queue<Node*> queue;
  Node* current = root;
  Node* lastVisited = nullptr;

  while (current || !queue.empty()) {
    while (current) {
      if (current->right) {
        queue.push(current->right);
      }

      if (current->left) {
        queue.push(current->left);
      }

      queue.push(current);
      current = current->left;
    }

    current = queue.front();
    queue.pop();

    if (current->right && current->right != lastVisited) {
      current = current->right;
      continue;
    } else {
      lastVisited = current;
      std::cout << current->data << " ";
      current = nullptr;
    }
  }
}

void printLevelOrder(Node* root) {
  if (root == nullptr) {
    return;
  }

  std::queue<Node*> queue;
  queue.push(root);

  while (!queue.empty()) {
    int levelSize = queue.size();

    for (int i = 0; i < levelSize; ++i) {
      Node* current = queue.front();
      queue.pop();

      std::cout << current->data << " ";

      if (current->left) {
        queue.push(current->left);
      }

      if (current->right) {
        queue.push(current->right);
      }
    }

    std::cout << std::endl;
  }
}
int main() {
  Node* root = nullptr;

  insertNode(root, 10);
  insertNode(root, 5);
  insertNode(root, 15);
  insertNode(root, 3);
  insertNode(root, 7);
  insertNode(root, 12);

  std::cout << "Pre-order traversal: ";
  preOrderTraversal(root);
  std::cout << std::endl;

  std::cout << "In-order traversal: ";
  inOrderTraversal(root);
  std::cout << std::endl;

  std::cout << "Post-order traversal: ";
  postOrderTraversal(root);
  std::cout << std::endl;

	printLevelOrder(root);

  return 0;
}

