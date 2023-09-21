#include<iostream>
#include<fstream>
#include<algorithm>
using namespace std;

bool seePal(string word){
    string tmp=word;
    reverse(word.begin(),word.end());
return tmp==word;
     
}

main(){
       
         ifstream myfile("Encinares.txt");
         int test; myfile>>test;
       
       for(int a=0;a<test;a++)       
       {
       string word, tmp; myfile>>word;
       int last=1; tmp = word;
       
        while(!seePal(word)){
           string one="";
         one = tmp.substr(0,last);
      reverse(one.begin(),one.end());
      word=tmp+one;
      last++;               
     }
          cout<<word<<endl;       
     }
    
       system("pause");
}
