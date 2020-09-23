
#include <iostream>

using namespace std;
typedef int elt_type;
class mstack
{	int top[10];
    int b[10]; int no;
	elt_type a[20];
	int max;
public:

	mstack(int m,int n);
bool IsFull(int sno);
	bool IsEmpty(int sno);
	void push(elt_type x,int sno);
	elt_type pop(int sno);
	void display(int sno);
	};
mstack::mstack(int m,int n)
{
max=m;
no=n;

for(int i=0;i<no;i++){
    top[i]=((max/no)*i)-1;
    b[i]=(max/no)*(i+1);

}

}
bool mstack::IsFull(int sno)
	{
		if(top[sno]==b[sno]-1)
			return true;
		return false;
	}
bool mstack::IsEmpty(int sno)

	{	if(top[sno]==((max/no)*sno)-1)
			return true;
		return false;
	}
	void mstack::push(elt_type item,int sno)
{       if(IsFull(sno))
	cout<<"Stack is full \n";
	else
		a[++top[sno]]=item;
}

elt_type mstack::pop(int sno)
{
	if(IsEmpty(sno))
		{cout<<"stack is empty\n"; return -1;}
	else{
	       cout<<"deleted element is"<<(a[top[sno]]);
                                    return (a[top[sno]--]);


}}

void mstack::display(int sno)
{        if(IsEmpty(sno))
		cout<<"stack is empty\n";
	else
	for(int i=top[sno];i>(max/no*sno)-1;i--)
	cout<<a[i];
}

int main()
{	int min, no;
  cout << "Enter maximum elements"<<endl;
  cin << max;
  cout << "Enter number of Stacks"<<endl;
  cin << no;

  mstack s = mstack(max, no);
	int option,ele;
	char ch;int sno;
	do{

cout<<"1.push\n2.Pop\n3.display\n4.exit\n";
cin>>option;
switch(option)
	{
	case 1:	cout<<"enter the element to be pushed\n";
		cin>>ele;
		cout<<"Enter stack no";
		cin>>sno;
		s.push(ele,sno);
		break;
	case 2: cout<<"Enter which stack";
	        cin>>sno;
	    	cout<<s.pop(sno);
		break;
	case 3:cout<<"Enter stack no";
           cin>>sno;
	    s.display(sno);break;
	case 4:return (0);
	}
	cout<<"Do u want to continue?\n";
	cin>>ch;
	fflush(stdin);
	}while((ch=='y')||(ch=='Y'));
}
