#include<iostream>
#include<string>
#include<string.h>
using namespace std;
const int MAX_SIZE = 30;
class Stack {
private:
    char items[MAX_SIZE];
    int top;
public:
    Stack();
        bool IsEmpty()const;
        bool IsFull()const;
        void Push(char a);
        char Pop();
        char Top()const;
        void Palindrome(string line);
};
Stack::Stack() {
    top = -1;
}bool Stack::IsEmpty()const {
    return (top == -1);
}
bool Stack::IsFull()const {
    return (top == MAX_SIZE-1);
}
void Stack::Push(char a) {
    if (IsFull()) {
        cout << "stack is overloaded\n";
    }
    else
    {
    	  top++;
    items[top] = a;
    cout<<"Pushed Element after "<<items[top]<<endl;
	}
  
}
char Stack::Pop() {
    if (IsEmpty()) {
        cout << "stack is empty\n";
        return -1;
    }
    return items[top--];
}
char Stack::Top()const {
    if (IsEmpty()) {
        cout << "stack is empty no value on top\n";
        return -1;
    }
    return items[top];
}
void Stack::Palindrome(string line)
{
    int counter=0;
    int mid=0;
       int length=line.length();
       cout<<endl<<endl<<"Length = "<<length<<endl;
       mid=length/2;
       cout<<"Mid    = "<<mid<<endl;
   
    for(int i=0;i<length;i++)
    {   
   // cout << line[i] << " before ";
	     Push(line[i]);
  //     cout<<endl<<"Pushed element "<<line[i]<<endl;
    }
    
    for(int j=0; j<=mid; j++)
    {
    	if(Pop()!=line[j])
    	{
    		cout<<"\tNot Palindrome"<<endl;
		    return ; 
		}

	}
	cout<<"\n\tPalindrome :-)"<<endl;
      
        
    }
    
    

int main()
{
	string input;
	int choice=1;
	Stack obj;
	while(choice==1)
	{
	cout<<"Enter the number you want to check weahter" 
	      "it is palindrome or not "<<endl;
	cin>>input;
    cout << input << endl;
	obj.Palindrome(input);
	cout<<endl<<endl;
	cout <<"Press 1 You want to check another number "<<endl;
	cin>>choice;
}
return 0;
}
