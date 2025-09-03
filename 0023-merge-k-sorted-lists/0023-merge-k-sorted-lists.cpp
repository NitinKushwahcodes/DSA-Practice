class Solution {
public:
    struct Cmp{
        bool operator()(ListNode* a, ListNode* b){
            return a->val > b->val;
        }
    };
    ListNode* mergeKLists(vector<ListNode*>& lists){
        priority_queue<ListNode*, vector<ListNode*>, Cmp> pq;
        for(int i=0; i<(int)lists.size(); i++){
            if(lists[i] != nullptr){
                pq.push(lists[i]);
            }
        }
        ListNode dummy(0);
        ListNode* cur = &dummy;
        while(!pq.empty()){
            ListNode* node = pq.top();
            pq.pop();
            cur->next = node;
            cur = cur->next;
            if(node->next != nullptr){
                pq.push(node->next);
            }
        }
        return dummy.next;
    }
};
