 // printing array reverse
 #include<iostream>
 using namespace std;
 main()

 {
 	int i;
 	int a[]={10,20,30,11,3,99,60,1};
 	int min=a[0];
 	int max=a[0];
 	for(i=0;i<=7;i++){
 		if (a[i]>max){
 			max=a[i];
		 }
		if (a[i]<min){
			min=a[i];
		}
	 }
	cout<<"\nMaximum number is array is: "<<max;
	cout<<"\nMinimum number is array is: "<<min;
 }

