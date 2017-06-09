#include <iostream>

using namespace std;

struct Node
{
    const char* data;
    Node *next;
    Node(const char* d, Node* n) {
        data = d;
        next = n;
    }
};

struct SLinkedList
{
    Node* head, *tail;
    long size;
    SLinkedList() {
        head = NULL;
        tail = NULL;
        size = 0;
    }
    void addFirst(const char* s) {
        if (size==0) {
            head = new Node(s,NULL);
            tail = head;
            size++;
        }
        else {
            head = new Node(s,head);
            size++;
        }
    }
    void addLast(const char* s) {
        Node* newNode = new Node(s,NULL);
        if (size==0) head = newNode;
        else tail->next = newNode;
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
            delete tmp;
            size--;
            return s;
        }
    }
    const char* removeLast() {
        if (size!=0) {
            size--;
            if (size==0) {
                const char* s = head->data;
                delete head;
                return s;
            }
            Node* p;
            for (p=head; p->next!=tail; p = p->next) {};
            tail = p;
            const char* s = (tail->next->data);
            delete tail->next;
            return s;
        }
    }
    void insertAfter(Node* p, const char* s) {
        if (p==NULL) addLast(s);
        else {
            p->next = new Node(s,p->next);
            if (p==tail) tail = p->next;
        }
        size++;
    }
    const char* remove(Node* p) {
        if (size<1) return "";
    	const char* s = p->data;
    	if (p==head) {
    		head = p->next;
    		delete p;
            size--;
    		return s;
    	}
        Node* tmp;
        for (tmp=head; tmp->next!=p; tmp = tmp->next) {};
        tmp->next = p->next;
    	if (p==tail) tail = tmp;
        delete p;
        size--;
        return s;
    }

    SLinkedList operator= (const SLinkedList& l) {
        Node* p = l.head;
        while (p!=NULL) {
            addLast(p->data);
        }
        return *this;
    }

    ~SLinkedList() {
        while (size>0) removeFirst();
    }
};
SLinkedList test_a() {
    cout << "test a: ";
    SLinkedList list;
    list.addFirst("NewYork");
    list.addLast("London");
    list.addLast("Paris");
    list.addFirst("Barcelona");
    list.addLast("Madrid");
    return list; cout << endl;
}

void test_b() {
    cout << "test b: ";
    SLinkedList list;
    list.addFirst("NewYork");
    list.addLast("London");
    list.addLast("Paris");
    list.addFirst("Barcelona");
    list.addLast("Madrid");
    SLinkedList l = list;
    l.print(); cout << endl;
}

int main()
{
    test_a().print();
    test_b();
    return 0;
}