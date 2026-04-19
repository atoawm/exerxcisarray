/*
1. ทบทวนการสลับที่โดยให้สลับตาม output ที่แสดงออกมา 

*ไม่ต้องใช้ loop*

#input
-

#output
{John, Anna, Steve}
{Steve, Anna, John}
{Steve, John, Anna}

*/

#include <iostream>
using namespace std;
int main(){
    string name[3] = {"Anna", "John", "Steve"};
    string me;
    me=name[0];
    name[0]=name[1];
    name[1]=me;
    cout<<"{"<<name[0]<<", "<<name[1]<<", "<<name[2]<<"}"<<"\n";
    me=name[2];
    name[2]=name[0];
    name[0]=me;
    cout<<"{"<<name[0]<<", "<<name[1]<<", "<<name[2]<<"}"<<"\n";
    me=name[1];
    name[1]=name[2];
    name[2]=me;
    cout<<"{"<<name[0]<<", "<<name[1]<<", "<<name[2]<<"}"<<"\n";

return 0;
}





