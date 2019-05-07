#include<iostream.h>
#include<conio.h>
#include<stdio.h>
char nama[20],kelas[8], abs[10];
void main() {
int data[5];
int i, total, rata, tmp;
clrscr();
cout<<"aplikasi nilai hitung rata2"<<endl;
cout<<"-----------------------------------"<<endl;
cout<<"masukan nama :";cin>>nama;
cout<<"-----------------------------------"<<endl;
cout<<"masukan nilai mahasiswa"<<endl;
total=0;
for(i=0; i<5; i++)
{
cout<<"masukan nilai ke-"<<(i+1)<<" : ";cin>>data[i];
total = total+data[i];
}
cout<<endl;
cout<<"-----------------------------------"<<endl;
cout<<"mahasiswa dengan"<< " punya nilai sebagai berikut :\n"<<endl;
rata = total / 5;
cout<<"total :"<<total<<endl;
cout<<"rata-rata : "<<rata<<endl;
getch();
}
