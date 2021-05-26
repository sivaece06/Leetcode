/**
Detect a Loop:
-------------
Point slow and fast pointer to the first node where head is pointing to.
Continue to move slow pointer by one node (slow = slow->next) and fast pointer by two nodes (fast = fast->next->next).
If at any point slow or fast becomes NULL, stop the traversal. There is no loop in the linked list.
If at any point, slow and fast meet together (slow == fast), there is a loop in the list.

Remove the Loop:
--------------
To remove the loop, we need to figure out the last node of the list and point that node to NULL. In the above algorithm, 
slow and fast pointers meet somewhere in the loop which might not be the start or end node of the loop.

Point the near pointer to the first node. And point the far pointer as far as the size of the loop. Keep a prev pointer just before far pointer.
Keep moving above three pointers, until near meets far. The meeting point would be the start of the loop and prev would be the end of the loop.
Assign NULL to prev.
Note: To place the far pointer as far as the size of the loop, we can first point the far pointer to the first node. Point another pointer,
say ptr, to next of any loop node (say where slow and fast met). Keep moving far and ptr until ptr comes back to the loop node.
**/
class Solution
{
    public:
    //Function to remove a loop in the linked list.
    Node *detectLoop (Node* head) {
        Node *fast = head, *slow = head;
        
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            
            if (slow == fast)
                return slow;
        }
        
        return nullptr;
    }
    
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        Node *loopHead = detectLoop(head);
        
        if (loopHead == nullptr)
            return;
        
        Node *near = head;
        Node *far = head;
        Node *ptr = loopHead;
        Node *prev = NULL;
    
        while(ptr->next != loopHead)
        {
            ptr = ptr->next;
            far = far->next;
        }
    
        prev = far;
        far = far->next;
    
        while(near != far)
        {
            prev = far;
            far = far->next;
            near = near->next;
        }
    
        prev->next = NULL;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, num;
        cin>>n;
        
        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);
        
        for(int i=0 ; i<n-1 ; i++)
        {
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
        }
        
        int pos;
        cin>> pos;
        loopHere(head,tail,pos);
        
        Solution ob;
        ob.removeLoop(head);
        
        if( isLoop(head) || length(head)!=n )
            cout<<"0\n";
        else
            cout<<"1\n";
    }
	return 0;
}
  // } Driver Code Ends
