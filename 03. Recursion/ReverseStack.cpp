#include<bits/stdc++.h>
using namespace std;
 
stack<char> st;
 
string ns;
 

char insert_at_bottom(char x)
{
 
    if(st.size() == 0)
    st.push(x);
 
    else
    {           
        char a = st.top();
        st.pop();
        insert_at_bottom(x);
        st.push(a);
    }
}
 
        // push allthe items held in
22
        // Function Call Stack
23
        // once the item is inserted
24
        // at the bottom// Below is the function that
// reverses the given stack using
// insert_at_bottom()
char reverse()
{
    if(st.size()>0)
    {
         
        // Hold all items in Function
        // Call Stack until we
        // reach end of the stack
        char x = st.top();
        st.pop();
        reverse();
        insert_at_bottom(x);
    }
}
 
// Driver Code
int main()
{
     
    // push elements into
    // the stack
    st.push('1');
    st.push('2');
    st.push('3');
    st.push('4');
     
    cout<<"Original Stack"<<endl;
     
    // print the elements
    // of original stack
    cout<<"1"<<" "<<"2"<<" "
        <<"3"<<" "<<"4"
        <<endl;
     
    // function to reverse
    // the stack
    reverse();
    cout<<"Reversed Stack"
        <<endl;
     
    // storing values of reversed
    // stack into a string for display
    while(!st.empty())
    {
        char p=st.top();
        st.pop();
        ns+=p;
    }
     
    //display of reversed stack
    cout<<ns[3]<<" "<<ns[2]<<" "
        <<ns[1]<<" "<<ns[0]<<endl;
    return 0;
}
