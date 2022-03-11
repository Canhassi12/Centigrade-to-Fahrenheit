#include <iostream>
using namespace std;

///Centigrade to Fahrenheit///
/////////by Canhassi/////////

int main()
{
   int opc;
   float c, f;
  
   

  cout<<"select the option:" <<endl;
  cout<<"1:Centigrades to Fahrenheit "<<endl;
  cout<<"2:Fahrenheit to Centigrades "<<endl;
  
  cin>> opc;

  if (c!=1,2)
  {
      cout <<"anata wa baka desuka?" <<endl;
  }
 
  switch (opc)

	case 1:
    {
		cout<< "you select the option one" << endl;

        cout<< "how many centigrades it is?" <<endl;
        cin>>c;

        f = 1.8 * c + 32;

        cout<< f <<" that is your value in fahrenheit" << endl;
        
		break;

	case 2:
        cout<< "you select the option two" << endl;

        cout<< "how many farrenheit it is?" <<endl;
        cin>>f;

        c = (f - 32) / 1.8;
       
        cout<< c <<" that is your value in centigrade" << endl;
		
        break;
    }
  
  
  
  
  
  
   

   
  
   

   
   





   



    return 0;
}