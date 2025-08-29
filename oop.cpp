#include<iostream>
using namespace std;

class product{
	private:
		char p_name[20];
		int p_price,p_qty,amt,dis,net;
	public:
		set_p(){
			cout<<"enter product name: \n";
			cin>>p_name;
			
			cout<<"enter price:\n";
			cin>>p_price;
			
			cout<<"enter qty: \n";
			cin>>p_qty;
			
			amt=p_price*p_qty;
			
		    net=amt-(0.1*amt);
		}
		
		void get_p(){
			cout<<"\n---Product details---\n";
			cout<<endl<<"\nName: "<<p_name<<endl<<"Price: "<<p_price<<endl<<"QTY: "<<p_qty;
		    cout<<endl<<"\nAmt: "<<amt<<endl<<"discount: "<<0.1*amt<<endl<<"net amt: "<<net;
		}
		
		int total_sale(){
			return(net);
		}
		
};

main(){
	int total;
	product p1,p2,p3;
	p1.set_p();
	p2.set_p();
	p3.set_p();
	p1.get_p();
	p2.get_p();
	p3.get_p();
	total=p1.total_sale()+p2.total_sale()+p3.total_sale();
	cout<<endl<<"Total Sale of products: "<<total;
}