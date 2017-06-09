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
    ~SLinkedList() {
        if (size<1) return;
        for (Node* p=head; p!=NULL;) {
            Node* tmp = p;
            p = p-> next;
            delete tmp;
        }
    }
};

void testA1() {
    SLinkedList list;
    cout << "testA1:" << endl;
    list.addFirst("Thai Binh");
    list.print();
    list.addLast("Hai Phong");
    list.print();
    list.addLast("Viet Nam");
    list.print();
    cout << endl;
}

void testA2() {
    cout << "testA2: " << endl;
    SLinkedList list;
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
    cout << "testA3:" << endl;
    SLinkedList* list = new SLinkedList();
    list->addFirst("Thai Binh");
    list->addLast("Hai Phong");
    list->addLast("Viet Nam");
    list->print();
    cout << endl;
    delete list;
}

void testA4() {
    cout << "testA4:" << endl;
    SLinkedList list;
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
	cout << "testA5:" << endl;
    SLinkedList list;
    list.addFirst("NewYork");
    list.addLast("London");
    list.addLast("Paris");
    list.print();
    list.insertAfter(list.head,"After head");
    list.print();
    list.insertAfter(list.tail,"After tail");
    list.print();
    cout << endl;
}

void testA6() {
	cout << "testA6:" << endl;
    SLinkedList list;
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