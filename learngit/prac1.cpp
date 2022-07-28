#include<iostream>
using namespace std; 
class student
{
public:
    string name;
    int rollno;
    int sem;
    student(): name("na") ,rollno(0) ,sem(0){

    } 
    student(string name,int rollno,int sem):  name(name),rollno(rollno),sem(sem){

    } 
    student* nxt;
    student* prev;
    void displaydata(){ 
        cout<<"-------------------------------------"<<endl;        
        cout<<name<<" ["<<rollno<<"] "<<sem<<endl; 
        cout<<"-------------------------------------"<<endl;
    }
}; 
void iterate(student* ptr,student* end,int type){
    if(type==1){
    while(true){
        ptr->displaydata();
        ptr = ptr->nxt;
        if (ptr->nxt==end)
        {
            break;/* code */
        }        
    }}
    else{
    while(true){
        ptr->displaydata();
        ptr = ptr->prev;
        if (ptr->prev==end)
        {
            break;/* code */
        }        
    }
    }
}
int main()
{ 
student *p1 = new student("gurashish",1904990,3);
student *p2 = new student("gurdeep",1904991,4);
student *p3 = new student("gurinder",1904992,7);
student *p4 = new student("gurjot",1904993,5);
student *p5 = new student("gursimran",1904996,6);
p1->nxt=p2;
p2->nxt=p3;
p3->nxt=p4;
p4->nxt=p5;
p5->nxt=p1; 

p1->prev=p5;
//p3->displaydata();
cout<<"NAME"<<" ["<<"ROLL NO"<<"] "<<"SEM"<<endl;
iterate(p1,p2,1);
    return 0;
} 