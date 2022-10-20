
#include <iostream>
using namespace std;

struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};
class Solution
{
    public:
    Node* reverseList(Node* low){
        Node* prev=NULL;
        Node* next=low;
        while(next){
            next=low->next;
            low->next=prev;
            prev=low;
            low=next;
        }
        return prev;
    }
    Node* reverseBetween(Node* head, int m, int n)
    {
        if(!head || !head->next) return head;
        Node* temp=new Node(0);
        temp->next=head;
        Node* low=temp;
        Node* high=temp;
        
        for(int i=1;i<m;i++){
            low=low->next;
        }
        for(int i=0;i<n;i++){
            high=high->next;
        }
        Node* prev=low;
        low=low->next;
        Node* next=high->next;
        high->next=NULL;
        low=reverseList(low);
        high=low;
        while(high->next)high=high->next;
        prev->next=low;
        high->next=next;
        return temp->next;
    }
};
int main(){
    
    return 0;
}