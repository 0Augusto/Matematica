#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
  int aux, num, div = 0;
  cout << "Digite um numero natural: ";
  cin >> num;
    for(aux = 2; aux <= sqrt(num); aux = aux + 1)
      if(num%aux == 0)
        div = div + 1;
     
      if(div == 0)
        cout<<"É primo"<<endl;
      else
        cout<<"Não é primo"<<endl;
return 0;
}//end main
