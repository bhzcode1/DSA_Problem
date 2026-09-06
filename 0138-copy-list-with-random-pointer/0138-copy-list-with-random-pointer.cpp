/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head ==NULL){
            return NULL;
        }
      Node* newhead= new Node(head->val);
      unordered_map<Node*,Node*> m;
      Node* curr = head->next;
      Node* newcurr= newhead;
      m[head]=newhead;
      while(curr){
        Node* copy = new Node(curr->val);
         m[curr]=copy;
        newcurr->next=copy;
       
        curr=curr->next;
        newcurr=newcurr->next;
      }
      curr=head;
      newcurr=newhead;
      while(curr){
       newcurr->random = m[curr->random];
       curr=curr->next;
       newcurr=newcurr->next; 
      }
     return newhead;
    }
};