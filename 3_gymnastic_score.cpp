/*
3. พี่พลอยถูกคัดเลือกให้ไปเป็นผู้ให้คะแนนยิมนาสติกโดยพี่พลอยเคยเห็นสูตรให้คะแนนจากโจทย์เขียนโปรแกรมของจุฬาฯ
เลยอยากให้น้องอะตอมช่วยเขียนโปรแกรมการนับคะแนนยิมนาสติกให้พี่พลอย โดยจะมีกรรมการทั้งหมด 4 ท่าน
แต่ละท่านจะให้คะแนนเป็นจำนวนเต็มที่ไม่เท่ากันเลย การนับคะแนนคือให้ตัดคะแนนที่มากที่สุดและน้อยที่สุดออก
และนำคะแนนที่เหลือมาหาค่าเฉลี่ยตามตัวอย่าง

#input
Enter #1 score: 1
Enter #2 score: 7
Enter #3 score: 8
Enter #4 score: 9

#output
Average Score: 7.5
*/

#include <iostream>
using namespace std;
int main(){
    float name[4]={0};
    int max=0;
    int min =10000;
    for(int i=0;i<4;i++){
        cout<<"Enter #"<<i+1<<" score: ";
        int a;
        cin>>a;
        name[i]=a;
    }for(int i=0;i<4;i++){
        if(name[i]>max){
        max = name[i];
        }if(name[i]<min){
        min = name[i];
        }
    }
    float avg = ((name[0]+name[1]+name[2]+name[3])-(min+max))/2;
    cout<<"Average Score: "<<avg;

return 0;
}
