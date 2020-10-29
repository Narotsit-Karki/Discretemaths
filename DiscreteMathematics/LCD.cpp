#include<iostream>
using namespace std;
int main(){
int i, n1, n2, lcm = 1, t;
     cout << "Enter two numbers: ";
         cin >> n1 >> n2;
	     t = (n1 > n2) ? n1 : n2;
	         i = t;
		     while(1)
	    {
		            if(i % n1 == 0 && i % n2 == 0)
				            {
						                lcm = i;
								            break;
									            }

			            i += t;
				        }
  cout << "Lcm = " << lcm;
  return 0;
}
