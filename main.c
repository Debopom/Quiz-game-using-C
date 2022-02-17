#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
void easy();
void medium();
void hard();
void easy_score();
void medium_score();
void hard_score();
void delay();
void help();
int main(){
    char option;
    char option_play;
    char score_option;

    SYSTEMTIME str_t;
    GetSystemTime(&str_t);
    system("cls");

    printf("\t\t\t**************************************************************");
    printf("\n\t\t\t**************************************************************");
    printf("\n\t\t\t**************************************************************");
    printf("\n\t\t\t**************************************************************");
    printf("\n\t\t\t****\t\t\t\t\t\t\t  ****");
    printf("\n\t\t\t****\t\t\t   <<WELCOME>>\t\t\t  ****");
    printf("\n\t\t\t****\t\t\t\t\t\t\t  ****");
    printf("\n\t\t\t****\t\t\t\t\t\t\t  ****");
    printf("\n\t\t\t****\t\t\t\t\t\t\t  ****");
    printf("\n\t\t\t****\t\t\t\t\t\t\t  ****");
    printf("\n\t\t\t****\t\t\t\t\t\t\t  ****");
    printf("\n\t\t\t****\t\t\t    QUIZ GAME\t\t\t  ****");
    printf("\n\t\t\t****\t\t\t    CREATED BY \t\t\t  ****");
    printf("\n\t\t\t****\t\t\tDEBOPOM SUTRADHAR\t\t  ****");
    printf("\n\t\t\t****\t\t\t ID 011 201 046 \t\t  ****");
    printf("\n\t\t\t****\t\t\t SUDIPTO MONDAL \t\t  ****");
    printf("\n\t\t\t****\t\t\t ID 011 201 184 \t\t  ****");
    printf("\n\t\t\t****\t\t\tJAFOR ARFIN TANVIN\t\t  ****");
    printf("\n\t\t\t****\t\t\t ID 011 201 231 \t\t  ****");
    printf("\n\t\t\t****\t\t\t\t\t\t\t  ****");
    printf("\n\t\t\t****\t\t\t\t\t\t\t  ****");
    printf("\n\t\t\t****\t\t  PRESS ANY KEY TO CONTINUE.....\t  ****");
    printf("\n\t\t\t****\t\t\t\t\t\t\t  ****");
    printf("\n\t\t\t****\t\t\t\t\t\t\t  ****");
    printf("\n\t\t\t****                     Date:%d-%d-%d                  ****",str_t.wDay,str_t.wMonth,str_t.wYear);
    printf("\n\t\t\t****\t\t\t\t\t\t\t  ****");
    printf("\n\t\t\t**************************************************************");
    printf("\n\t\t\t**************************************************************");
    printf("\n\t\t\t**************************************************************");
    printf("\n\t\t\t**************************************************************");
    getch();
menu:
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tPress P to Play The Game\n\n");
    printf("\t\t\t\t\tPress S to See Previous Scores\n\n");
    printf("\t\t\t\t\tPress H For Help\n\n");
    printf("\t\t\t\t\tPress E to Exit\n\n");
    option = getch();
    if(toupper(option) == 'P'){
        option_select:
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tFor Easy Difficulty Press E\n\n");
        printf("\t\t\t\t\tFor Medium Difficulty Press M\n\n");
        printf("\t\t\t\t\tFor Hard Difficulty Press H\n\n");
        printf("\t\t\t\t\tTo Go Back To Menu Press B\n\n");

        option_play = getch();
        if(toupper(option_play) == 'E'){
            easy();
            goto menu;
        }

        else if(toupper(option_play) == 'M'){
            medium();
            goto menu;
        }

        else if(toupper(option_play) == 'H'){
            hard();
            goto menu;
        }
        else if(toupper(option_play) == 'B'){

            goto menu;
        }
        else
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tError input, Please Enter The Right Command!!\n");
            delay(1000);
            goto option_select;




    }

    else if ((toupper(option) == 'S')){
        score:
        system("cls");
         printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tPlease Select Difficulty Level:\n");
         printf("\t\t\t\t\t________________________________\n\n");
        printf("\t\t\t\t\tFor Easy Press E\n\n");
        printf("\t\t\t\t\tFor Medium Press M\n\n");
        printf("\t\t\t\t\tFor Hard Press H\n\n");
        printf("\t\t\t\t\tTo Go Back To Menu Press B\n\n");
        score_option = getch();
        if(toupper(score_option) == 'E'){
            easy_score();
            goto score;
        }

        else if(toupper(score_option) == 'M'){
            medium_score();
            goto score;
        }

        else if(toupper(score_option) == 'H'){
            hard_score();
            goto score;
        }
        else if(toupper(score_option) == 'B'){

            goto menu;
        }
        else
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tError input, Please Enter The Right Command!!\n");
            delay(1000);
            goto score;


        }
    else if ((toupper(option) == 'E')){
        exit(0);
    }
    else if(toupper(option) == 'H'){
        system("cls");

        help();
        printf("\n\n\n\n\n\t\t\t\t\tPress Any Key To Go Back To Menu......");
        getch();
        goto menu;

    }
    else{
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tError input, Please Enter The Right Command!!\n");
        delay(1000);
        goto menu;
    }

return 0;
}

void easy(){
    system("cls");

    char name[100];
    int i , score = 0 , ques;
    printf("please enter your name : ");
    gets(name);
    score=0;

    for(i=1;i<=10;i++){
        ques=rand() % 15;
        switch(ques){
            case 1:
                system("cls");
                printf("\n\nWhich shape does not have four sides?");
                printf("\n\nA.Rectangle\t\tB.Parallelogram\n\nC.Rhombus\t\tD.Triangle");
                if (toupper(getch())=='D'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is D.Triangle");
                    getch();
                    break;
                }

            case 2:
                system("cls");
                printf("\n\nWho was the first person to step on the moon?");
                printf("\n\nA.Alan Shepard\t\tB.Neil Armstrong\n\nC.Buzz Aldrin\t\tD.John Glenn");
                if (toupper(getch())=='B'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is B.Neil Armstrong");
                    getch();
                    break;
                }

            case 3:
                system("cls");
                printf("\n\nWhich force keeps you down to earth?");
                printf("\n\nA.Friction\t\tB.Magnetic\n\nC.Gravity\t\tD.Electric");
                if (toupper(getch())=='C'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is C.Gravity");
                    getch();
                    break;
                }

            case 4:
                system("cls");
                printf("\n\nHow many years is a century?");
                printf("\n\nA.100\t\tB.50\n\nC.10\t\tD.1000");
                if (toupper(getch())=='A'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is A.100");
                    getch();
                    break;
                }

            case 5:
                system("cls");
                printf("\n\nWhat is the most abundant gas in the earth's atmosphere?");
                printf("\n\nA.Carbon Dioxide\t\tB.Oxygen\n\nC.Hydrogen\t\t\tD.Nitrogen");
                if (toupper(getch())=='D'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is D.Nitrogen");
                    getch();
                    break;
                }

            case 6:
                system("cls");
                printf("\n\nHow much is a quarter?");
                printf("\n\nA.1/2\t\tB1/3\n\nC.1/4\t\tD.1/12");
                if (toupper(getch())=='C'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is C.1/4");
                    getch();
                    break;
                }

            case 7:
                system("cls");
                printf("\n\nHow long does the earth take to rotate around it's axis?");
                printf("\n\nA.1 Day\t\t\tB.1 week\n\nC.1 year\t\tD.4 years");
                if (toupper(getch())=='A'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is A.1 Day");
                    getch();
                    break;
                }

            case 8:
                system("cls");
                printf("\n\nWhich Apollo mission landed the first humans on the moon?");
                printf("\n\nA.Apollo 7\t\tB.Apollo 9\n\nC.Apollo 11\t\tD.Apollo 13");
                if (toupper(getch())=='C'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is C.Apollo 11");
                    getch();
                    break;
                }

            case 9:
                system("cls");
                printf("\n\nWhat planet is the closest to the sun?");
                printf("\n\nA.Venus\t\tB.Mars\n\nC.Earth\t\tD.Mercury");
                if (toupper(getch())=='D'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is D.Mercury");
                    getch();
                    break;
                }

            case 10:
                system("cls");
                printf("\n\nHow many days are there in a leap year?");
                printf("\n\nA.364 Days\t\tB.365 Days\n\nC.366 Days\t\tD.367 Days");
                if (toupper(getch())=='C'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is C.366 Days");
                    getch();
                    break;
                }

                case 11:
                system("cls");
                printf("\n\nIn which city can you visit the Statue of Liberty?");
                printf("\n\nA.New York\t\tB.Washington DC\n\nC.Greenwich\t\tD.Toronto");
                if (toupper(getch())=='A'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is A.New York");
                    getch();
                    break;
                }

                case 12:
                system("cls");
                printf("\n\nWhat is the longest bone in the human body?");
                printf("\n\nA.Femur\t\tB.Scapula\n\nC.Tibia\t\tD.Skull");
                if (toupper(getch())=='A'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is A.Femur");
                    getch();
                    break;
                }

                case 13:
                system("cls");
                printf("\n\nWhat force affects compasses?");
                printf("\n\nA.Gravity\t\tB.Tension\n\nC.Electric\t\tD.Magnetic");
                if (toupper(getch())=='D'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is D.Magnetic");
                    getch();
                    break;
                }

                case 14:
                system("cls");
                printf("\n\nWhat percentage of land area should remain covered by forest to maintain Ecological balance?");
                printf("\n\nA.23%\t\tB.9%\n\nC.33%\t\tD.None of these");
                if (toupper(getch())=='C'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is C.33%");
                    getch();
                    break;
                }

                case 15:
                system("cls");
                printf("\n\nWhat kind of animal is a dolphin?");
                printf("\n\nA.Mammal\t\tB.Fish\n\nC.Reptile\t\tD.Amphibian");
                if (toupper(getch())=='A'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is A.Mammal");
                    getch();
                    break;
                }


        }



    }
    system("cls");
    printf("score is : %d" , score);
    getch();

    FILE *fp;
    fp = fopen("easyscore.txt", "a");
    if(fp == NULL){
        printf("There is no score.");
        return;
    }

    fprintf(fp, "%s\t%d\n", name , score);
    fclose(fp);
}

void easy_score(){
    typedef struct{
    char name[100];
    int sco;
    }hscore;

    int count=0 , j;
    int status;
    hscore hs[1000];
    system("cls");
    FILE *fp;
    fp=fopen("easyscore.txt","r");
    while(1){
        status = fscanf(fp,"%s %d",&hs[count].name,&hs[count].sco);

        if (status ==-1 ){
            break;
        }
        count++;
    }
    fclose(fp);
    printf("\n\n\t\t\t\tName\t\t\t\t\tScore\n");
    printf("\t\t\t\t_____________________________________________\n");
    for(j=0;j<count;j++){
        printf("\n\t\t\t\t%s\t\t\t\t\t %d\n",hs[j].name,hs[j].sco);
    }

    getch();
}

void medium(){
    system("cls");

    char name[100];
    int i , score = 0 , ques;
    printf("please enter your name : ");
    gets(name);
    score=0;

    for(i=1;i<=10;i++){
        ques=rand() % 15;
        switch(ques){

                case 1:
                system("cls");
                printf("\n\nWhich was the 1st non Test playing country to beat India in an international match?");
                printf("\n\nA.Zimbabwe\t\tB.East Africa\n\nC.Sri Lanka\t\tD.Canada");
                if (toupper(getch())=='C'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is C.Sri Lanka");
                    getch();
                    break;
                }

                case 2:
                system("cls");
                printf("\n\nWho is the father of Geometry?");
                printf("\n\nA.Euclid\t\tB.Pythagoras\n\nC.Kepler\t\tD.Aristotle");
                if (toupper(getch())=='A'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is A.Euclid");
                    getch();
                    break;
                }

                case 3:
                system("cls");
                printf("\n\nWho is the first Asian Winner of Nobel Prize?");
                printf("\n\nA.Mother Teresa\t\tB.Rabindranath Tagore\n\nC.Rajiv Gandhi\t\tD.C.V. Raman");
                if (toupper(getch())=='B'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is B.Rabindranath Tagore");
                    getch();
                    break;
                }


                case 4:
                system("cls");
                printf("\n\nThe Homolographic projection has the correct representation of");
                printf("\n\nA.Shape\t\t\tB.Area\n\nC.Baring\t\tD.Distance");
                if (toupper(getch())=='B'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is B.Area");
                    getch();
                    break;
                }

                case 5:
                system("cls");
                printf("\n\nThe great Victoria Desert is located in");
                printf("\n\nA.Canada\t\tB.West Africa\n\nC.Australia\t\tD.North America");
                if (toupper(getch())=='C'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is C.Australia");
                    getch();
                    break;
                }

                case 6:
                system("cls");
                printf("\n\nThe chairmanship/presidency of the UN Security Council rotates among the Council Members");
                printf("\n\nA.Every 6 months\t\tB.Every 3 months\n\nC.Every year\t\t\tD.Every month");
                if (toupper(getch())=='D'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is D.Every months");
                    getch();
                    break;
                }

                case 7:
                system("cls");
                printf("\n\nWhen is the World Population Day observed?");
                printf("\n\nA.May 31\t\tB.October 4\n\nC.December 10\t\tD.July 11");
                if (toupper(getch())=='D'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is D.July 11");
                    getch();
                    break;
                }

                case 8:
                system("cls");
                printf("\n\nJournalist Day was celebrated for the first time all over the country on");
                printf("\n\nA.Oct. 20, 1984\t\tB.Oct. 1, 1984\n\nC.Oct 28, 1984\t\tD.Oct. 8, 1984");
                if (toupper(getch())=='C'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is C.Oct 28, 1984");
                    getch();
                    break;
                }

                case 9:
                system("cls");
                printf("\n\nThe United Nations declared 1993 as a year of the");
                printf("\n\nA.disabled\t\tB.forests\n\nC.girl child\t\tD.indigenous people");
                if (toupper(getch())=='D'){
                    printf("\n\nCorB.Jinevarect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is D.indigenous people");
                    getch();
                    break;
                }

                case 10:
                system("cls");
                printf("\n\n'OS' computer abbreviation usually means ?");
                printf("\n\nA.Order of Significance\t\tB.Open Software\n\nC.Operating System\t\tD.Optical Sensor");
                if (toupper(getch())=='C'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is C.Operating System");
                    getch();
                    break;
                }

                case 11:
                system("cls");
                printf("\n\nWhich is a type of Electrically-Erasable Programmable Read-Only Memory?");
                printf("\n\nA.Flash\t\tB.Flange\n\nC.Fury\t\tD.FRAM");
                if (toupper(getch())=='A'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is A.Flash");
                    getch();
                    break;
                }

                case 12:
                system("cls");
                printf("\n\nWho developed Yahoo?");
                printf("\n\nA.Dennis Ritchie & Ken Thompson\t\tB.David Filo & Jerry Yang\n\nC.Vint Cerf & Robert Kahn\t\tD.Steve Case & Jeff Bezos");
                if (toupper(getch())=='B'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is B.David Filo & Jerry Yang");
                    getch();
                    break;
                }

                case 13:
                system("cls");
                printf("\n\nWhere is the headquarter of World Health Organization (WHO)?");
                printf("\n\nA.New York\t\tB.Jineva\n\nC.Peris\t\t\tD.London");
                if (toupper(getch())=='B'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is B.Jineva");
                    getch();
                    break;
                }

                case 14:
                system("cls");
                printf("\n\nWhich was the 1st non Test playing country to beat India in an international match?");
                printf("\n\nA.Canada\t\tB.Sri Lanka\n\nC.Zimbabwe\t\tD.East Africa");
                if (toupper(getch())=='B'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is B.Sri Lanka");
                    getch();
                    break;
                }

                case 15:
                system("cls");
                printf("\n\nFamous Tennis player Stefan Edberg belongs to");
                printf("\n\nA. U.K.\t\t\tB.Norway\n\nC.Sweden\t\tD.Italy");
                if (toupper(getch())=='C'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is C.Sweden");
                    getch();
                    break;
                }


        }



    }
    system("cls");
    printf("score is : %d" , score);
    getch();

    FILE *fp;
    fp = fopen("mediumscore.txt", "a");
    if(fp == NULL){
        printf("There is no score.");
        return;
    }

    fprintf(fp, "%s\t%d\n", name , score);
    fclose(fp);
}

void medium_score(){
    typedef struct{
    char name[100];
    int sco;
    }hscore;

    int count=0 , j;
    int status;
    hscore hs[1000];
    system("cls");
    FILE *fp;
    fp=fopen("mediumscore.txt","r");
    while(1){
        status = fscanf(fp,"%s %d",&hs[count].name,&hs[count].sco);

        if (status ==-1 ){
            break;
        }
        count++;
    }
    fclose(fp);
    printf("\n\n\t\t\t\tName\t\t\t\t\tScore\n");
    printf("\t\t\t\t_____________________________________________\n");
    for(j=0;j<count;j++){

        printf("\n\t\t\t\t%s\t\t\t\t\t %d\n",hs[j].name,hs[j].sco);
    }

    getch();
}

void hard(){
    system("cls");

    char name[100];
    int i , score = 0 , ques;
    printf("please enter your name : ");
    gets(name);
    score=0;

    for(i=1;i<=10;i++){
        ques=rand() % 15;
        switch(ques){
            case 1:
                system("cls");
                printf("\n\nHow many breeds of elephant are there?");
                printf("\n\nA.Seven\t\tB.Three\n\nC.Five\t\tD.Six");
                if (toupper(getch())=='B'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is B.Three");
                    getch();
                    break;
                }

                 case 2:
                system("cls");
                printf("\n\nWhat is Shakespeare's shortest play?");
                printf("\n\nA.Macbeth\t\t\tB.Othello\n\nC.The Comedy of Errors\t\tD.Hamlet");
                if (toupper(getch())=='C'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is C.The Comedy of Errors");
                    getch();
                    break;
                }


                 case 3:
                system("cls");
                printf("\n\nHow many stars are on the national flag of USA?");
                printf("\n\nA.36\t\tB.50\n\nC.45\t\tD.28");
                if (toupper(getch())=='B'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is B.50");
                    getch();
                    break;
                }


                 case 4:
                system("cls");
                printf("\n\nIn terms of volume, which is the largest fresh lake in the world?");
                printf("\n\nA.Lake Superior\t\tB.Lake Tanganyika\n\nC.Lake Erie\t\tD.Lake Baikal");
                if (toupper(getch())=='D'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is D.Lake Baikal");
                    getch();
                    break;
                }


                 case 5:
                system("cls");
                printf("\n\nWhat year was Marmite invented?");
                printf("\n\nA.1902\t\tB.1929\n\nC.1899\t\tD.1878");
                if (toupper(getch())=='A'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is A.1902");
                    getch();
                    break;
                }


                 case 6:
                system("cls");
                printf("\n\nWho was the youngest British Prime Minister?");
                printf("\n\nA.Sir Robert Walpole\t\t\tB.Henry Pelham\n\nC.William Pitt the Younger\t\tD.George Grenville");
                if (toupper(getch())=='B'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is William Pitt the Younger");
                    getch();
                    break;
                }


                 case 7:
                system("cls");
                printf("\n\nWho designed the Eiffel Tower?");
                printf("\n\nA.Marc Eiffel\t\tB.Maurice Eiffel\n\nC.Eugène Eiffel\t\tD.Gustave Eiffel");
                if (toupper(getch())=='D'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is D.Gustave Eiffel");
                    getch();
                    break;
                }


                 case 8:
                system("cls");
                printf("\n\nWho has won the most Academy Awards?");
                printf("\n\nA.Katharine Hepburn\t\tB.Audrey Hepburn\n\nC.Howard Hughes\t\t\tD.Henry Fonda");
                if (toupper(getch())=='A'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is A.Katharine Hepburn");
                    getch();
                    break;
                }


                 case 9:
                system("cls");
                printf("\n\nWhere is the oldest tree in the world?");
                printf("\n\nA.Texas\t\t\tB.California\n\nC.Arizona\t\tD.Florida");
                if (toupper(getch())=='B'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is B.California");
                    getch();
                    break;
                }


                 case 10:
                system("cls");
                printf("\n\n When was the LEGO brick invented?");
                printf("\n\nA.1949\t\tB.1952\n\nC.1958\t\tD.1962");
                if (toupper(getch())=='C'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is C.1958");
                    getch();
                    break;
                }


                 case 11:
                system("cls");
                printf("\n\nWho is the author of the novel War and Peace?");
                printf("\n\nA.Fyodor Dostoevsky\t\tB.Leo Tolstoy\n\nC.Alexander Pushkin\t\tD.Anton Chekhov");
                if (toupper(getch())=='B'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is B.Leo Tolstoy");
                    getch();
                    break;
                }


                 case 12:
                system("cls");
                printf("\n\nWhat is the largest moon of Saturn called?");
                printf("\n\nA.Titan\t\t\tB.Enceladus\n\nC.Europa\t\tD.Six");
                if (toupper(getch())=='A'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is A.Titan");
                    getch();
                    break;
                }

                case 13:
                system("cls");
                printf("\n\nWhat is the currency of Sweden?");
                printf("\n\nA.Danish krone\t\tB.Euro\n\nC.Swiss franc\t\tD.Swedish krona");
                if (toupper(getch())=='A'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is D.Swedish krona");
                    getch();
                    break;
                }

                case 14:
                system("cls");
                printf("\n\nHow many countries make up Africa?");
                printf("\n\nA.41\t\tB.54\n\nC.65\t\tD.47");
                if (toupper(getch())=='B'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is B.54");
                    getch();
                    break;
                }

                case 15:
                system("cls");
                printf("\n\nRome was founded in which year?");
                printf("\n\nA.854 BC\t\tB.729 BC\n\nC.757 BC\t\tD.753 BC");
                if (toupper(getch())=='D'){
                    printf("\n\nCorrect!!!");score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is D.753 BC");
                    getch();
                    break;
                }


        }



    }
    system("cls");
    printf("score is : %d" , score);
    getch();

    FILE *fp;
    fp = fopen("hardscore.txt", "a");
    if(fp == NULL){
        printf("There is no score.");
        return;
    }

    fprintf(fp, "%s\t%d\n", name , score);
    fclose(fp);

}

void hard_score(){
    typedef struct{
    char name[100];
    int sco;
    }hscore;

    int count=0 , j;
    int status;
    hscore hs[1000];
    system("cls");
    FILE *fp;
    fp=fopen("hardscore.txt","r");
    while(1){
        status = fscanf(fp,"%s %d",&hs[count].name,&hs[count].sco);

        if (status ==-1 ){
            break;
        }
        count++;
    }
    fclose(fp);
    printf("\n\n\t\t\t\tName\t\t\t\t\tScore\n");
    printf("\t\t\t\t_____________________________________________\n");
    for(j=0;j<count;j++){
        printf("\n\t\t\t\t%s\t\t\t\t\t %d\n",hs[j].name,hs[j].sco);
    }

    getch();
}

void help(){
    printf("\n\n\t\t\t\t\t\tHELP");
    printf("\n \t\t\t\t\____________________________________\n\n");
    printf("\n\n >> There are Three difficulty levels");
    printf("\n\n >> Questions are based on General Knowledge");
    printf("\n\n >> You will be asked total 10 questions" );
    printf("\n\n >> For each right answer will be awarded 1 point.");
    printf("\n\n >> You will be given 4 options and you have to press A, B ,C or D for the right option");
    printf("\n\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n\n >> No negative marking for wrong answers");
}

void delay(unsigned int mseconds){
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

