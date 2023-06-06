//Noor Alqassab 2210003554,Raghad Alkhalaf 2210003671,Atheer Almalahi 2210003601,Randa Alghamdi	2190005914
//Newton's Second Law [ F=ma ]. Ohm’s Law Formula [ V= RI  ]. Mass-energy equivalence [ E= mc²  ]. Density [p=m/v].
#include <iostream>
#include <cmath>
using namespace std;

float voltage(float R, float I){
  cout<<" Enter the value of the electrical resistance:"<<endl;
     cin>>R;
     cout<<" Enter the value of the electric current:"<<endl;
     cin>>I;
      return R*I;
	}
 float resistance(float V,float I){
   cout<<" Enter the value of the electrical voltage:"<<endl;
     cin>>V;
     cout<<" Enter the value of the electric current:"<< endl;
     cin>>I;
      return V/I;
	}
 float current(float V, float R){
    cout<<" Enter the value of the electrical voltage:"<<endl;
     cin>>V;
      cout<<" Enter the value of the electrical resistance:"<<endl;
      cin>>R;
     return V/R;
	 	}
int main()
{
	float V,R,I;
	float F,m,a;
	float E;
	float P,v;
    char choose,A,B,C;
	int ch;
	do
	{
    cout<<"***************Welcome to our program that Calculates the  4 laws of physics***************"<<endl;
    cout<<"_______________Choose from the list_______________"<<endl<<"1)Ohm’s Law Formula "<<endl<<"2)Newton's Second Law"<<endl<<"3)Mass-energy equivalence"<<endl<<"4)Density"<<endl<<"5)To stop"<<endl;
    cin>>ch;
     switch(ch)
    {
    	case 1:
		cout<<"Ohm Law Formula "<<endl;
    	cout<<"_______________Choose from the list_______________"<<endl<<"A)To calculate the voltage  "<<endl<<"B)To calculate the electrical resistance "<<endl<<"C) To calculate the electric current"<<endl;
    	cin>>choose;
    if(choose=='A')
	{
	 float V=voltage(R,I);
     cout<< V <<"V"<<endl;
    }
    else if (choose=='B')
	{
		float R=resistance(V,I);
       cout<<R<<" Ohm"<<endl;
   }
    else if(choose=='C')
	{
	  float I=current(V,R);
      cout<<I<<"A"<<endl;
	  }
    else {
     cout<<"Error"<<endl;
	 }
   	       break;
    	case 2:
		cout<<"Newton's Second Law"<<endl;
    	cout<<"_______________Choose from the list_______________"<<endl<<"A)To calculate the force "<<endl<<"B)To calculate the mass "<<endl<<"C) To calculate the accelerationt"<<endl;
    cin>>choose;
    if(choose=='A')
	{
    }
    else if (choose=='B')
	{
   }
    else if(choose=='C')
	{
	  }
    else {
	 }
    	       break;
    	case 3:
		cout<<"Mass-energy equivalence"<<endl;
    	cout<<"_______________Choose from the list_______________"<<endl<<"A)To calculate the energy "<<endl<<"B)To calculate the mass "<<endl;
    cin>>choose;
    if(choose=='A')
	{
    }
    else if (choose=='B')
	{
   }
    else {
     cout<<"Error"<<endl;
	 }
    	       break;
    	case 4:
		cout<<"Density"<<endl;
    		cout<<"_______________Choose from the list_______________"<<endl<<"A)To calculate the Density "<<endl<<"B)To calculate the mass "<<endl<<"C) To calculate the volume"<<endl;
    cin>>choose;
    if(choose=='A')
	{
    }
    else if (choose=='B')
	{
   }
    else if(choose=='C')
	{
	  }
    else {
     cout<<"Error"<<endl;
	 }
    	       break;
    	case 5:
    		cout<<""<<endl;    
			  break; 	
    default:cout<<"	error"<<endl;
    }
	 }while(ch !=5);
	 
    return 0;}
