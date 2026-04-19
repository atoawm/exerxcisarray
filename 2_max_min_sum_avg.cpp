/*
2.เขียนโปรแกรมโดยให้หาค่า สูงสุด, ต่ำสุด, ผลรวม, และค่าเฉลี่ย จาก array ที่กำหนด โดยไม่ต้องรับ input
*ให้ใช้วิธีการหาค่า max, min ตามที่เคยเรียน*

#input
-

#output
Max: 9
Min: 0
Sum: 30
Avg: 5.33333
*/

#include <iostream>
using namespace std;
int main(){
    float name[6] = {2,3,6,5,9,7};
    int max =0;
    int min = 0;
    for(int i=0;i<6;i++){
        if(name[i]>max){
        max = name[i];
        }if(name[i]<min){
        min = name[i];
        }
    }
    int sum = name[0]+name[1]+name[2]+name[3]+name[4]+name[5];
    float avg = (name[0]+name[1]+name[2]+name[3]+name[4]+name[5])/6;
    
    cout<<"Max: "<<max<<"\n"<<"Min: "<<min<<"\n"<<"Sum: "<<sum<<"\n"<<"Avg: "<<avg;
return 0;
}
