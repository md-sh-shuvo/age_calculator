#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int year;
    int cyear;
    int month;
    int cmonth;
    int day;
    int cday;
    cout<<"Enter your birth date in following sequence - DD-MM-YYYY : "<<endl;
    cin>>day>>month>>year;
    cout<<"Enter current date in following sequence - DD-MM-YYYY : "<<endl;
    cin>>cday>>cmonth>>cyear;


//counting leap year
   int count =0;
   for ( int i = 4; i <=year; i++)
   {
     if ( (i%4)==0)
     {
      count++ ;
     }
     else{}
   }
   int ccount =0;
   for ( int i = 4; i <=cyear; i++)
   {
     if ( (i%4)==0)
     {
      ccount++ ;
     }
     else{}
   }
//counting additional day in month:

    int c=1;
    int count2=0;
    while (c<cmonth)
    {
      if ((c==1)||(c==3)||(c==5)||(c==7)||(c==8)||(c==10)||(c==12))
      {
        count2++;
      }
      else if (c==2)
      {
        if (cyear%4==0)
      {
        count2-=1;
      }
      else{
        count2-=2;
      }

      }
      else{
      }
      c++;
    }

    int d=1;
    int count3=0;
    while (d<month)
    {
      if ((d==1)||(d==3)||(d==5)||(d==7)||(d==8)||(d==10)||(d==12))
      {
        count3++;
      }
      else if (d==2)
      {
        if (year%4==0)
      {
        count3-=1;
      }
      else{
        count3-=2;
      }

      }
      else{
      }
      d++;
    }

    int finalday=(((cyear*365)+(cmonth*30)+(cday+ccount+count2))-((year*365)+(month*30)+(day+count+count3)));
    int finalyear = (finalday - (finalday%365))/365;
    cout<<"Year : "<<finalyear<<endl;
    int finalmonth =((finalday%365)-(finalday%365)%30)/30 ;
    cout<<"Month : "<<finalmonth<<endl;
    cout<<"Day : "<<(finalday%365)%30<<endl;
    cout<<"Total  "<<finalday<<" days"<<endl;





    return 0;
}
