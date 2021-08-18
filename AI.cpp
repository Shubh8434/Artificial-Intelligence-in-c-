#include<iostream>
#include<windows.h>
#include<mmsystem.h>
#include<stdio.h>

using namespace std;

int main()
{
   char ch[100];
   cout<<"*********************welcome to AI***********************";
   cout<<endl;
   while(1){
   cout<<"\n\n";
   gets(ch);
   if (strcmp(ch,"hi")==0){
    PlaySound(TEXT("Hey Folks.wav"),NULL,SND_SYNC);
   }
   else if (strcmp(ch,"how are you")==0){
    PlaySound(TEXT("i am Fine.wav"),NULL,SND_SYNC);
   }
   else if (strcmp(ch,"question")==0){
    PlaySound(TEXT("I have a Question.wav"),NULL,SND_SYNC);
   }
   else if (strcmp(ch,"answer")==0){
    PlaySound(TEXT("i think it will be reopen.wav"),NULL,SND_SYNC);
   }
   else if (strcmp(ch,"bye")==0){
    PlaySound(TEXT("have a nyc day.wav"),NULL,SND_SYNC);
   }
   }
}
