 // printing array reverse
 #include<iostream>
 using namespace std;
 main()

 {
 	int index,a[10],sum=0;
 	//input
 	for(index=0;index<5;index++)
 		{
 			cout<<"\nEnter element at ["<<index<<"]: ";
 			cin>>a[index];
		 }
	//output
	for(index=4;index>=0;index--)
 		{
 			cout<<endl<<"at a["<<index<<"] we have:"<<a[index];
 			
		 }
 }

