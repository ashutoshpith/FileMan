#include <iostream>
#include "fstream"
#include "vector"

using namespace std;

int main() {



    cout<<"#########\n"<<endl;

    string str,str1;
     ifstream file;


     file.open("hello.txt");
     if (file.is_open()){
         while(getline(file,str)){
             cout<<str<<endl;

         }
         file.close();
         cout<<"\nprocess done"<<endl;
     }
     else
         cout<<"\nnot done"<<endl;

     cout<<"#############"<<endl;

    for(int i=0; str[i]; i++)
        if(str[i] == ' ')
            str.erase(i,1);
        
    cout<<str<<endl;

    ofstream filel("hello.txt", ios::app);
    if(filel.is_open()){
        filel<<str<<endl;
        filel.close();

    }

    return 0;
}