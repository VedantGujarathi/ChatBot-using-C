#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<string.h>


char user_input[100];
int main()
{    
    char i ,ch;
     system("cls");
     printf("\t\t\t Welcome In A.I Chatbox");
     
     printf("\n\n I am your personal chatbox . My name is Alexa");
     while(1)
     {
         printf("\n==>");
         gets(user_input);
         if(strcmp(user_input,"exit")==0)
         {
             system("cls");
             printf("ok bye\n");
             break;
         }
         else if(strcmp(user_input,"hii") ==0 )
         {
             printf("Alexa ==> Hello \n\n Good Morning");
         }
         else if(strcmp(user_input,"how are you") ==0 )
         {
             printf("Im fine ");
             printf("\n How are you ?");
             scanf("%s",&ch);
             printf("\nSO,What can I do for You : ");
         }
          else if(strcmp(user_input,"open chrome") ==0 )
         {
             printf("Alexa ==> ok sir,opening chrome...");
            system("start chrome");
         }
         else if(strcmp(user_input,"open notepad") ==0 )
         {
             printf("Alexa ==> ok sir,opening notepad...");
            system("start notepad");
         }
          else if(strcmp(user_input,"open cmd") ==0 )
         {
             printf("Alexa ==> ok sir,opening cmd...");
            system("start  cmd");
         }
           else if(strcmp(user_input,"open youtube") ==0 )
         {
             printf("Alexa ==> ok sir,opening youtube...");
            system("start  https://youtube.com");
         }
          else if(strcmp(user_input,"joke") ==0 )
          {
              printf("Alexa ==> Telling You a Joke..... \n\n\n chintu : pappu tuzhe ek jadooi  baat batau  \npappu: chal bata \n chintu: yrr jab main kal raat bathroom jane ke liye utha bathrrom ka darvaja kholte hi achhanak light chalu hogai aur thandi hawa chalne lagi. \npappu: hahahahahahahahaha \nchintu: are isme hasne ki kya batt hain \npappu: are hasu nhi to kya karu ,sale fridge main moot ke chala gaya tu .hahahaha.") ;  
          }
          else if(strcmp(user_input,"time")==0)
         {
             time_t s,val = 1;
             struct tm* current_time;
             s= time(NULL);
             current_time= localtime(&s);
             printf("Alexa => %02d:%02d:%02d\n",current_time->tm_hour,current_time->tm_min,current_time->tm_sec);
         }
         else
         {
             printf("Sorry, I dont get it ");
         }
     }

}