#include <iostream>
using namespace std;

typedef struct Node{
        string songName;
        Node * link;
    
 }Node;   


Node *createNode(string data){
    Node* newNode = new Node;
    newNode ->songName;
    newNode->link;

    
    
} 

void traverse(Node *head){
        Node *temp= new Node;
        temp = head;

        cout <<"My Playlist" << endl;
        while(temp !=NULL){
                cout << temp ->songName << "->"<<endl;
                if(temp ->link == NULL){
                        cout << "NULL"<< endl;
                }
                temp = temp->link;
        }
}
Node *insertAtBegenning(string data, Node *head){
        Node *newNode = createNode(data);
        newNode->link = head;

        head = new Node;

        cout << "A new node has been inserted at the beginning\n" << endl;

        return head;
}
string insertAfter(string after, string data, Node *head){
        Node *temp =new Node;
        temp = head;

        while(temp->songName.compare(after) !=0){
                if(temp == NULL){
                        return "No such song exist, please try again later.";
                
                }

                temp = temp ->link;
        }
        Node *newNode = createNode(data);
        newNode->link = temp ->link;
        temp ->link =newNode;

        return "An new node has been added after" + after + "\n";
        
}
string deleteAtEnd(Node *head){
        if(head == NULL){
         return "The linked list is empty \n";
        }
        if(head->link == NULL){
                delete head;
                return "The head has been deleted \n";
        }

        Node *temp = new Node;
        temp = head;

        while(temp->link->link != NULL){
                temp = temp->link;
        }
        
        temp ->link =NULL;

        return "A node has been deleted at the end \n";

}
Node * deleteFromBeginning(Node *head){
        if(head == NULL){
                cout << "The linked list is empty \n" << endl;
                return NULL;
        }

        if(head->link == NULL){
                delete head;
        }
        head = head ->link;
        cout << "A node has been delete from the beginning \n" << endl;

        return head;
}
Node *deleteFromgivenNOde(string givenNode, Node *head){
        if(head == NULL){
                cout << "The linked list is empty, \n" << endl;
                return NULL;
        }

        if(head->songName.compare(givenNode) == 0){
                head = deleteFromBeginning(head);
                cout << "The Node" + givenNode + "has been deleted. \n" << endl;
                return head;
        }
        
        Node *temp = new Node;
        Node * next = new Node;
        temp = head;
        next = temp->link;

        while(next->songName.compare(givenNode) !=0){
                if(temp == NULL){
                        cout << "No such node exist. \n" << endl;
                        return head;
                }
                next = next->link;
                temp = temp ->link;
        }
        
        temp->link =next -> link;
        cout << "The Node" + givenNode + "has been deleted. \n"<< endl;
        return head;
               

}
Node *insertAtEnd(string data, Node *head){
        if(head == NULL){
                Node *newNode = createNode(data);
                head = newNode;
                cout << "A new node has been inserted at the end \n" << endl;
                return head;
        }
        Node *temp = new Node;
        temp = head;

        while(temp ->link != NULL){
                temp = temp ->link;
        }

        Node *newNode = createNode(data);
        temp->link = newNode;


        cout << "A new node has been inserted at the end\n" << endl;
        return head;
}
int main(){
Node *head =createNode("Sikulo by Jared");

head = insertAtBegenning("Sunday Morning by Maroon 5", head);
head = insertAtBegenning("Dalling by Trevor daniel", head);
head = insertAtBegenning("let me Down slowly by alec", head);
head = insertAtBegenning("shape of You by ed Sheeran", head);
head = insertAtBegenning("Faded by Allan Walker", head);
 traverse(head);


head = insertAtEnd("Sining by Dionela", head);
head = insertAtEnd("Dilaw by Maki", head);
head = insertAtEnd("pagtingin by Ben&Ben", head);
head = insertAtEnd("Habang buhay by Zack Tabudlo", head);
head = insertAtEnd("Ikaw lang by Nobita", head);
 traverse(head);
       Node *sample = new Node;
    sample ->songName = "Heaven Knows by Mike Magno";
    
    cout << sample ->songName << endl;
    
    return 0;
 }