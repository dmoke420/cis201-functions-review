/**
File main.cpp
Developer: Lorenzo Cooper 
Email: cooperl145799@student.vvc.edu
date: 10-16-2018
Descrption Input : counts how many a's
**/

#include<iostream>

#include<string>

#include<cctype>

using namespace std;

int a_search(string p);
bool is_a(char a);




int main()
{

string a;
cout << " Please enter a string: ";
getline(cin, a);
cout << "This is the numbers of a: " << a_search(a) << endl;


return 0;
}


int a_search(string p)
{
   int count = 0;
  
  for(int l = 0; l < p.length(); l++)
   
    {   
        if(is_a(p.at(l)));
        count++;
    }




return count;


}

bool is_a(char a) // char are only charcters one charcter 
{

return a == 'a' || a == 'A';

}



