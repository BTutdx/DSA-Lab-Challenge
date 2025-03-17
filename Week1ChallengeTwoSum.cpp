 
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
           
           for(int i= 0; i<nums.size(); i++){
            for(int j = i+1; j<nums.size(); j++){
                int sum = nums[i] + nums[j];
                if(sum == target){
                    return {i,j};
                }    
            }
    
           } 
             return {};
            
        }
    };



        class Solution{
            public:
            ListNode* addTwoNumbers(ListNode* l1, ListNode*l2){
            ListNode* l3 = new ListNode(0);  //creating new link list initialy givr the  it value 0
            int carry = 0;
            //delcare some other head to return other head to end position
            ListNode* head = l3;
            while(l1 && l2){    // l1 and l2 should have value not null
            //    taking the value of linked list
              int value = l1->val+l2->val+carry;
              carry = value/10;  
              l3->next = new ListNode(value%10);
              l3 = l3->next;
              l2 = l2->next;
              l1 = l1->next;
            }
            // what if the linked list are not equal
            while(l1){
                int value =l1->val + carry;
                carry = value/10;
                l3->next = new ListNode(value%10);
                l3 = l3->next;
                l1 = l1->next;
            }
             while(l2){
                int value =l2->val + carry;
                carry = value/10;
                 l3->next = new ListNode(value%10);
                l3 = l3->next;
                l2 = l2->next;
            }
            // at lat if u have carry  it must return
            if(carry){
                l3 -> next = new ListNode(carry);
            }
            return head -> next;
        
        
            }
        };