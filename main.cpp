//Authors:Pedro V Ojeda
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  int lucky;
string first, last;
cout<<"What is your first name?\n";
cin>>first;

cout<<"What is your last name?\n";
cin>>last;

  //get user input

cout<<"Welcome,"<<first[0]<<"."<<last[0]<<"."",here is your fortune..."<<endl;
//tell fortune

cout<<"Your lucky number is "<<first.length()+last.length()<<endl;
  return 0;
}
