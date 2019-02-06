#include <iostream>
#include "fstream"
#include "vector"

using namespace std;

int main() {



    cout<<"#########\n"<<endl;

    string str;
     ifstream file;

     vector<string> vector1;

     file.open("hello.txt");
     if (file.is_open()){
         while(getline(file,str)){
             //cout<<str<<endl;
             vector1.push_back(str);

         }
         file.close();
         cout<<"\nprocess done"<<endl;
     }
     else
         cout<<"\nnot done"<<endl;

        for(auto i:vector1)
            cout<<i<<endl;



    return 0;
}