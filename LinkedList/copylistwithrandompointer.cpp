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
         
        unordered_map<Node*,Node*> mp;
            Node* curr = head;
            while(curr){
                Node* copy = new Node(curr->val);
                mp[curr] = copy;
                curr = curr-> next;
            }
            for(auto& [ k , v]: mp){
              v->next   = (k->next   != NULL) ? mp[k->next]   : NULL;
    v->random = (k->random != NULL) ? mp[k->random] : NULL;
            }

        return mp[head];
        }
        
    
    
};