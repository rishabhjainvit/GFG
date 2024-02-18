
class Solution
{
    public:
        
        long long unsigned int decimalValue(Node *head)
        {
           // Your Code Here
           long long int ans =0;
           int mod = 1e9+7;
           while(head){
               ans = (ans*2+head->data)%mod;
               head=head->next;
           }
           return ans;
        }
};