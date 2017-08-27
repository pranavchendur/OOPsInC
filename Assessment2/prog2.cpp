#include<iostream>
using namespace std;
#include<math.h>
struct time_UD
{
    int hour;
    int minute;
    void get()
    {
    cin>>hour>>minute;
    }
    void print()const
    {
    cout<<hour<<endl;
    cout<<minute<<endl;
    }
    //Function to check if time are equal
    bool equals(time_UD &);
};
bool time_UD::equals(time_UD& t1)
{
    if(hour==t1.hour && minute==t1.minute)
        return true;
    return false;
}
class timeInterval
{
    time_UD st_Time;
    time_UD end_Time;
    //Private function to check if two time intervals
    // are equal
    bool equal(timeInterval&);
    public:
    //Function to read input
    void get();
    //Function to print
    void print()const;
    //Function to check if two time Interval are equal
    // return true when equal and false otherwise
    bool equals(timeInterval&);
    //function to find free time intervals
    //input is array of time intervals of members and number of slots
    // and an array of time interval to store output
    // function returns the number of time intervals when both the members
    // are free
    int findFree(timeInterval* mem1,int num1, timeInterval* mem2,int num2,timeInterval* comm);
};
void timeInterval::get() {

 this->st_Time.get();
 this->end_Time.get();
}

bool timeInterval::equals(timeInterval &b){
  return st_Time.equals(b.st_Time);
}

int timeInterval::findFree(timeInterval* mem1,int num1, timeInterval* mem2,int num2,timeInterval* comm) {
 int i,j,k=0;
 for (i=0;i<num1;i++) {
  for (j=0;j<num2;j++) {
   if(mem1[i].equals(mem2[i])) {
    comm[k].st_Time=mem2[i].st_Time;
    comm[k].end_Time=mem2[i].end_Time;
    k++;
   }
  }
 }
 return k;
}

void timeInterval::print() const {
 st_Time.print();
 end_Time.print(); 
}

int main()
{
    timeInterval mem1[10],mem2[10],comm[10];
    int num1,num2,count;
    cin>>num1;
    for(int i=0;i<num1;i++)
    mem1[i].get();
    cin>>num2;
    for(int i=0;i<num2;i++)
    mem2[i].get();
    count = mem1[0].findFree(mem1,num1,mem2,num2,comm);
    if(count!=0)
    {
        for(int i=0;i<count;i++)
            comm[i].print();
    }
    else
    {
        cout<<"0"<<endl;
        cout<<"0"<<endl;
    }
}