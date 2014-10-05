#include <iostream.h>
#include <conio.h>
main()
{
int j,d,m,dd,jj;
cout<<"Program konversi Waktu"<<endl;
cout<<"dibuat oleh Mia Amalia"<<endl;
cout<<"==========================="<<endl;
cout<<endl;
cout<<" Masukan waktu dalam detik : ";
cin>>d;
	j=d/3600;
   jj=d&3600;
   m=d/60;
   dd=d%60;

   cout<<"  jam  :"<<"  menit  :  "<<" detik "<<endl;
   cout<<"     "<< j <<" :   "<< m <<"    :"<<"    "<< dd ;

   getch();
}