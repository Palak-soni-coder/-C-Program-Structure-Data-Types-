// EXPERIMENT - 2
// PALAK SONI
// 24070123069
// ENTC A3
//Problem statement- Write a program which includes different data types of C++.


#include <iostream>
using namespace std;
int main(){
 
   int a;
   cout<<"Enter any integer:";
   cin>>a;
   cout<<"Integer = "<<a<<" and size is "<<sizeof(a)<<" bytes"<<endl;
   
   float b;
   cout<<"Enter any number with decimal:";
   cin>>b;
   cout<<"Float= "<<b<<" and size is "<<sizeof(b)<<" bytes"<<endl;
   
   double c;
   cout<<"Enter any number with decimal:";
   cin>>c;
   cout<<"Double= "<<c<<" and size is "<<sizeof(c)<<" bytes"<<endl;
   
   string d;
   cout<<"Enter any string:";
   cin>>d;
   cout<<"String = "<<d<<" and size is "<<sizeof(d)<<" bytes"<<endl;
   
   char e;
   cout<<"Enter any character:";
   cin>>e;
   cout<<"Character = "<<e<<" and size is "<<sizeof(e)<<" bytes"<<endl;
   
   bool f;
   cout<<"Enter any boolean:";
   cin>>f;
   cout<<"Boolean = "<<f<<" and size is "<<sizeof(f)<<" bytes"<<endl;
    return 0;
}


/*Output








*/
