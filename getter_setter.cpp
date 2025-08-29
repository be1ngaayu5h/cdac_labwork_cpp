#include<iostream>
using namespace std;
class Test{
	private:
		int a,b,c;
	 
	public:
		void setter_function(){
			cout<<"Enter value for A and B: \n";
			cin>>a>>b;
			c=a+b;
		}
	    void getter_function(){
	    	cout<<"\n A: "<<a<<"\n B: "<<b<<"\n C: "<<c;
		} 
		
		int comp(){
			return(c);
		}
};

main(){
	Test t1,t2;
	t1.setter_function();
	t2.setter_function();
	if (t1.comp()>t2.comp())
	t1.getter_function();
	else
	t2.getter_function();
}