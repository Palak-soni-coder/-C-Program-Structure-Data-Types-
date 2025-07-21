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
Enter any integer:12
Integer = 12 and size is 4 bytes
Enter any number with decimal:12.12
Float= 12.12 and size is 4 bytes
Enter any number with decimal:12.78
Double= 12.78 and size is 8 bytes
Enter any string:palak
String = palak and size is 32 bytes
Enter any character:h
Character = h and size is 1 bytes
Enter any boolean:true
Boolean = 0 and size is 1 bytes
*/
