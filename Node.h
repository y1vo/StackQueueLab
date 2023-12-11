#ifndef LABSTACKANDQUEUE_NODE_H
#define LABSTACKANDQUEUE_NODE_H


template<class T>
class Node {
public:
    T data;
    Node<T> *connectedNode;

    explicit Node(T data, Node *connectedNode = nullptr) {
        this->data = data;
        this->connectedNode = connectedNode;
    }

};


#endif //LABSTACKANDQUEUE_NODE_H
