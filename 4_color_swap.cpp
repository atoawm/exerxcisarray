/*
4. พี่พลอยซื้อสีไม้แบบ 6 สีแต่ว่าวางทิ้งไว้ที่โต๊ะแล้วมีเพื่อนหยิบสีไปใช้ แล้วเพื่อนไม่ได้เรียงสีลงในกล่องให้เรียบร้อย
พี่พลอยเลยอยากให้น้องอะตอมช่วยเขียนโปรแกรมสำหรับการสลับสีกลับที่เดิม โดยโปรแกรมจะรับ input 2 ตัว เป็นตำแหน่งของสีในกล่อง 
แล้วจะทำการเช็คว่าสีในกล่องตรงกับการเรียงที่ถูกต้องหรือไม่ ถ้าไม่ถูก ให้รับ input และทำการสลับไปเรื่อยๆจนกว่าจะเรียงถูกต้องทั้งหมด

การเรียงสีที่ถูกต้องคือ {"Red", "Orange","Yellow", "Green", "Blue", "Violet"}

#console

{Orange Red Violet Yellow Blue Green}
--------------------------------------
Enter color locations to swap: 1 2
{Red Orange Violet Yellow Blue Green}
--------------------------------------
Enter color locations to swap: 3 4
{Red Orange Yellow Violet Blue Green}
--------------------------------------
Enter color locations to swap: 4 6
{Red Orange Yellow Green Blue Violet}
--------------------------------------
All colors sorted!
*/

string c[6] = {"Orange", "Red", "Violet", "Yellow", "Blue", "Green"};

cout << "{" << c[0] << " " << c[1] << " "
     << c[2] << " " << c[3] << " "
     << c[4] << " " << c[5] << "}" << "\n" 
     << "--------------------------------------\n";
while (true)
{
    if (_______)
    {
        cout << "All colors sorted!";
        break;
    }
}