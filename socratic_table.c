#include<stdio.h>
#include<stdbool.h>

    int main(){     
        //for period 1 only
        int ans_1;
        int ans_1_1;

        int ans_2;//for more than 84amu
        //period 2
        int ans_2_1;
        int ans_2_2;
        int ans_2_3;
        int ans_2_4;
        int ans_2_5;
        int ans_2_6;
        int ans_2_7;
        int ans_2_8;

        int ans_3;
        int ans_4;
        int ans_5;
        int ans_6;
        int ans_7;
        

          //period 1
        char e1[]="Hidrogen";
        char e2[]="Helium";
          //period_2
        char e3[]="Lithum";
        char e4[]="Beryllium";
        char e5[]="Boron";
        char e6[]="Carbon";
        char e7[]="Nitrogen";
        char e8[]="Oxygen";
        char e9[]="Fluorine";
        char e10[]="Neon";
        //period 3
        char e11[]="Sodium";
        char e12[]="Magnesium";
        char e13[]="Aluminium";
        char e14[]="Silicon";
        char e15[]="Phosphorus";
        char e16[]="Sulfur";
        char e17[]="Clorine";
        char e18[]="Argon";
        //period 3
        char e19[]="Potassium";
        char e20[]="Calcium";
        char e21[]="Scandium";
        char e22[]="Titanium";
        char e23[]="Vanadium";


          
          //Intro
          printf("\n\n\n\n");
          printf("\tLets play a game\n\n");
          //Description
          printf("Here at first, you will hold a random\nelement in your mind. Then, I will try\nto guess the element by asking you some\nquestions. The questions will carry\nan answer of either 'Yes' or 'No'. So, lets see \nif I can guess the correct element\nthrough the expertise questions.\n\n\n");
          //Rules
          printf("Press 1 if your answer is 'YES'\nand type 0 if the answer is 'NO'\n\nDon't forget to sit with a Periodic table\nLets begin....\n\n");

          //period 1
          //First question
          printf("Here goes the first question:\n\n1. Is the element located in 'Period' 1?\n");
          //First answer
          printf("Your Answer: ");
          scanf("%d", &ans_1);
          printf("\n");
          if (ans_1>1 || 0>ans_1){
            printf("Please Only type either '1' or '0' in your answer");//error
          }

          //analyzing the user input (Answer)
          if (ans_1==1) {
                printf("I see your element is in 'Period 1'\n\nDoes it has single Proton in it's Nucleus?\nYour Answer: ");
                scanf("%d", &ans_1_1);

                if (ans_1_1>1 || 0>ans_1_1){
                  printf("Please Only type either '1' or '0' in your answer");//error
                }

                if (ans_1_1==1){
                  printf("The element is %s", e1);
                } 

                if (ans_1_1==0) {
                  printf("The element is %s", e2);
                }
              //period 1 ends


          } else {
                //question 2 ensuring the mass

                printf("Okay..\nQuestion goes on:\n2.Does it has a mass of more than 84amu?\nYour answer: ");
                scanf("%d", &ans_2);

                if (ans_2>1 || 0>ans_2){
                  printf("Please Only type either '1' or '0' in your answer");//error
                }


                //period 2
                if (ans_2==0){
                      printf("Is your element belongs to period 2?\nYour answer: ");
                      scanf("%d", &ans_2_1);
                    if (ans_2_1>1 || 0>ans_2_1){
                      printf("Please Only type either '1' or '0' in your answer");//error
                    }        
                }

                if (ans_2_1==1){
                      printf("Is that an Alkaline Metal or metalloid?\nYour answer: ");
                      scanf("%d", &ans_2_2);         
                    if (ans_2_2>1 || 0>ans_2_2){
                      printf("Please Only type either '1' or '0' in your answer");//error
                    }    

                if(ans_2_2==1){
                      printf("Does it belong to Group 1?\nYour answer:");
                      scanf("%d", &ans_2_3);
                    if (ans_2_3>1 || 0>ans_2_3){
                      printf("Please Only type either '1' or '0' in your answer");//error
                    }
                }

                if(ans_2_3==1){
                    printf("\n");
                    printf("The element is %s", e3);
                }      

                if(ans_2_3==0){
                      printf("Does it belong to Metalloids?\nYour answer:");
                      scanf("%d", &ans_2_4);
                    if (ans_2_4>1 || 0>ans_2_4){
                      printf("Please Only type either '1' or '0' in your answer");//error
                    }
                    if(ans_2_4==1){
                      printf("The element is %s", e5);
                    }
                    if(ans_2_4==0){
                      printf("The element is %s", e4);
                    }
                }

                if(ans_2_2==0){
                      printf("Does it belongs to Halo-gens or Noble gas?\nYour name: ");
                      scanf("%d", &ans_2_5);

                    if (ans_2_5>1 || 0>ans_2_5){
                      printf("Please Only type either '1' or '0' in your answer");//error
                    }

                  if(ans_2_5==1){
                      printf("Is is a Noble gas?\nYour answer: ");
                      scanf("%d", &ans_2_6);

                    if (ans_2_6>1 || 0>ans_2_6){
                      printf("Please Only type either '1' or '0' in your answer");//error
                    }

                    if(ans_2_6==1){
                          printf("The element is %s", e10);
                    } else {
                          printf("The element is %s", e9);
                    }

                  }    
                }
                if(ans_2_5==0){
                          printf("Does its mass more than 13amu?\nYour answer: ");
                          scanf("%d", &ans_2_7);

                    if (ans_2_7>1 || 0>ans_2_7){
                          printf("Please Only type either '1' or '0' in your answer");//error
                    }

                    if(ans_2_7==0){
                          printf("The element is %s", e6);
                    }

                    if(ans_2_7==1){
                          printf("Does it form water?\nYour answer: ");
                          scanf("%d", &ans_2_8);

                      if (ans_2_8>1 || 0>ans_2_8){
                            printf("Please Only type either '1' or '0' in your answer");//error
                      }

                      if(ans_2_8==1){
                            printf("The element is %s", e8);
                      }

                      if(ans_2_8==0){
                            printf("The element is %s", e7);
                      }
                    }
                }
            }
            
          }














           


      printf("\n\n\n\n\n\n\n\n");


    return 0;
}

