#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    char ch;
    cin>>a>>b;
    cin>>ch;
    switch(ch){
      case '+':
      cout<<"add "<<a+b;
      break;
      case '-':
      cout<<"sub "<<a-b;
      break;
      case '*':
      cout<<"mul "<<a*b;
      break;
      case '/':
      cout<<"div "<<a/b;
     break;
     default:
    cout<<"not valid";
    break;

    }






}