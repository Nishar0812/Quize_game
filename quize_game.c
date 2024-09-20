#include<stdio.h>
int main()
{
    int i ;
    int ans1,ans2,ans3,ans4,ans5;
    int point1,point2,point3,point4,point5,point6,point7,point8,point9,point10;
    int point01,point02,point03,point04,point05,point06,point07,point08,point09,point010;
    int total1,total2,total3;

    printf("Welcome to the game \n\n");

    printf("press 7 to start the game\n");
    printf("> press 0 to quite the game\n");

    scanf("%d" ,&i);

    if (i==7)
    {
      printf("The game has started\n\n");
    }
    else if(i==0){
      printf("The game has ended \n\n");
    }
    else{
      printf("Invalid\n\n");
    }
    if(i==7){
      printf("1) Which one of the first search engine in the internet\n\n");
      printf("1) Google\n");
      printf("2) Archie\n");
      printf("3) Wais\n");
      printf("4) Altavita\n");

      printf("Enter Your Answer:\n");
      scanf("%d",&ans1 ,"\n");

      if(ans1==2){
        printf("Correct Answer\n");
        point1 =5;
        printf("You have scored %d point\n",point1);
      }
      else{
        printf("Wrong Answer\n");
        point01 = 0;
        printf("You have scored %d point\n",point01);
      }

      printf("2) Which one is the first web brower invented in 1990\n\n");
      printf("1) Internet Explorer\n");
      printf("2) mosaic\n");
      printf("3)mozila\n");
      printf("4)nexus\n");
      
      printf("Enter Your Answer\n");
      scanf("%d",&ans2);

      if(ans2==4){
        printf("Correct Answer\n");
        point2 =5;
        printf("You have scored %d point\n",point2);
      }
      else{
        printf("Wrong Answer\n");
        point02 = 0;
        printf("You have scored %d point\n",point02);
      }


    printf("3) First computer virus in known as?\n\n");
    printf("1) Rabbit\n");
    printf("2)Creeper virus\n");
    printf("3)Elk Cloner\n");
    printf("SCA virus\n");

    printf("Enter Your Answer:\n");
    scanf("%d",&ans3,"\n");

    if(ans3==2){
        printf("Correct Answer\n");
        point3 =5;
        printf("You have scored %d point\n",point3);
      }
      else{
        printf("Wrong Answer\n");
        point03 = 0;
        printf("You have scored %d point\n",point03);
      }

      printf("4) Firewall in computer used for?\n\n");
      printf("1) Security\n");
      printf("2) Data Transsion\n");
      printf("3) Monitoring\n");
      printf("4) Authentication\n");

      printf("Enter Your Answer\n");
      printf("%d",&ans4,"\n");

      if(ans4==1){
        printf("Correct Answer\n");
        point4 =5;
        printf("You have scored %d point\n",point4);
      }
      else{
        printf("Wrong Answer\n");
        point04 = 0;
        printf("You have scored %d point\n",point04);
      }

      printf("5) Which of the following is not a database software?\n\n");
      printf("1)Mysql\n");
      printf("2)Oracal\n");
      printf("3) cobal\n");
      printf("4) Sybase\n");

      printf("Enter Your Answer:");
      scanf("%d",&ans5);

      if(ans5==3){
        printf("Correct Answer\n");
        point5 =5;
        printf("You have scored %d point\n",point5);
      }
      else{
        printf("Wrong Answer\n");
        point05 = 0;
        printf("You have scored %d point\n",point05);
      }


}
return 0;
}
  