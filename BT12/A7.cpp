#include <iostream>

using namespace std;

struct Node
{
    const char* data;
    Node *next, *prev;
    Node(const char* d, Node* n, Node* p) {
        data = d;
        next = n;
        prev = p;
    }
};

struct DLinkedList
{
    Node* head, *tail;
    long size;
    DLinkedList() {
        head = NULL;
        tail = NULL;
        size = 0;
    }
    void addFirst(const char* s) {
        if (size==0) {
            head = new Node(s,NULL,NULL);
            tail = head;
            size++;
        }
        else {
            head = new Node(s,head,NULL);
            size++;
        }
    }
    void addLast(const char* s) {
        if (size==0) {
            addFirst(s);
            return;
        }
        Node* newNode = new Node(s,NULL,tail);
        tail->next = newNode;
        tail = newNode;
        size++;
    }
    void print() {
        if (size<1) return;
        for (Node* p=head; p!=tail; p = p->next) {
            cout << (p->data) << "  ";
        }
        cout << tail->data;
        cout << endl;
    }
    const char* removeFirst() {
        if (size>0) {
            Node* tmp = head;
            const char* s = (head->data);
            head = head->next;
            if(size!=1) head->prev = NULL;
            delete tmp;
            size--;
            return s;
        }
    }
    const char* removeLast() {
        if (size>0) {
            if (size==1) removeFirst();
            else {
                const char* s = tail->data;
                tail = tail->prev;
                delete tail->next;
                size--;
                return s;
            }
        }
    }
    void insertAfter(Node* p, const char* s) {
        if (p==tail) addLast(s);
        else {
            Node* newNode = new Node(s,p->next,p);
            p->next = newNode;
            newNode->next->prev = newNode;
            size++;
        }
    }
    const char* remove(Node* p) {
        if (size==0) return "";
    	if (p==head) removeFirst();
        else {
            if (p==tail) removeLast();
            else {
                const char* s = p->data;
                Node* tmp = p->prev;
                tmp->next = p->next;
                p->next->prev = tmp;
                delete p;
                size--;
                return s;
            }
        }
    }
    ~DLinkedList() {
        if (size<1) return;
        while (size>0) {
            removeFirst();
        }
    }
};

void testA1() {
    DLinkedList list;
    cout << "testA1: addFirst, addLast, print" << endl;
    list.addFirst("Thai Binh");
    list.print();
    list.addLast("Hai Phong");
    list.print();
    list.addLast("Viet Nam");
    list.print();
    cout << endl;
}

void testA2() {
    cout << "testA2: removeFirst" << endl;
    DLinkedList list;
    list.addFirst("Thai Binh");
    list.addLast("Hai Phong");
    list.addLast("Viet Nam");
    list.print();
    while (list.size!=0) {
        list.removeFirst();
        list.print();
    }
    cout << endl;
}

void testA3() {
    cout << "testA3: destructor" << endl;
    DLinkedList* list = new DLinkedList();
    list->addFirst("Thai Binh");
    list->addLast("Hai Phong");
    list->addLast("Viet Nam");
    list->print();
    cout << endl;
    delete list;
}

void testA4() {
    cout << "testA4: removeLast" << endl;
    DLinkedList list;
    list.addFirst("NewYork");
    list.addLast("London");
    list.addLast("Paris");
    list.print();
    while (list.size!=0) {
        list.removeLast();
        list.print();
    }
    cout << endl;
}

void testA5() {
	cout << "testA5: insertAfter" << endl;
    DLinkedList list;
    list.addFirst("NewYork");
    list.addLast("London");
    list.addLast("Paris");
    list.print();
    list.insertAfter(list.head,"Afterhead");
    list.print();
    list.insertAfter(list.tail,"Aftertail");
    list.print();
    cout << endl;
}

void testA6() {
	cout << "testA6: remove" << endl;
    DLinkedList list;
    list.addFirst("NewYork");
    list.addLast("London");
    list.addLast("Paris");
    list.addFirst("Barcelona");
    list.addLast("Madrid");
    list.print();
    list.remove(list.head);
    list.print();
    list.remove(list.head->next->next);
    list.print();
    list.remove(list.tail);
    list.print();
}

int main()
{
    testA1();
    testA2();
    testA3();
    testA4();
    testA5();
    testA6();
}