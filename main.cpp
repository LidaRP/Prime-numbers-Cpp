#include <iostream>
using namespace std;

int main() 
          {
	         int x,l=0;
	            cout<<"Please enter a number:\n";
	            cin>>x;
	        for(int i=2;i<x;i++)
	              {
	    	      if(x%i==0)
	    	          {
	    		        cout<<"not prime number";
	    		        l=1;
				        break;
			          }
		          }
	        if (l==0)
	                {
		               cout<<"prime number";
	                }
	  	
return 0;
          }
