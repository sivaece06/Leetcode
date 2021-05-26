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
