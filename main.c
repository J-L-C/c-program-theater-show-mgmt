

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "constance_and_typedef.c"



////////////////////////////////
///////////////////////////////
/* Function Prototype Only*/
/////////////////////////////
////////////////////////////
struct show *inputShowdata();
  char* inputShow (struct show *current);
  char inputgenreCodeShow(struct show *current);
  float inputweeklyShowdetail (struct show *current);
  char inputweeklyShowchar (struct show *current);
  int inputFile(struct show *first);
  int output(struct show *first);//used for output formating.
  ////////////////////////////////////////////
  //CHECK FUNCTIONS///////////////////////////
  ////////////////////////////////////////////
  //CHECK FUNCTIONS///////////////////////////
  ////////////////////////////////////////////
  int check_show_code (struct show *current); //verify
  int check_show_start_day (struct show *current); //verify
  int check_show_start_month (struct show *current);//verify
  int check_show_start_year (struct show *current);//verify
  int check_show_end_day (struct show *current);//verify
  int check_show_end_month (struct show *current);//verify 
  int check_show_end_year (struct show *current);//verify
  int check_show_per_week (struct show *current);//verify
  int check_show_seats (struct show *current);//verfiy
  int check_show_length (struct show *current);//verify
  int check_show_adult (struct show *current);//verify
  int check_show_child (struct show *current);//verify
  int check_show_infant (struct show *current);//verify
  int check_show_run (struct show *current);//verify
  int check_show_total_shows (struct show *current);//verify
  ////////////////////////////////////////////////////////
  //CHECK FUNCTIONS OF inputweeklyShowdetail/////////////
  ///////////////////////////////////////////////////////
  float check_show_start (struct show *current);
  float check_show_cost (struct show *current);
  //////////////////////////////////////////////////////
  //CHECK FUNCTION//////////////////
  /////////////////////////////////////////////////////
  char check_inputgenreCodeShow (struct show *current);
  ////////////////////////////////////////////////////
  //CHECK FUNCTION///////////////
  ///////////////////////////////////////////////////
  char check_day_show (struct show *current);
  char check_show_designation (struct show *current);
  
  //USER FUNCTIONS
  //||||||||||||
  //USER FUNCTIONS
  int search_by_show_designation (void);/*pass in first*/
  int search_by_show_date (void);
  int search_by_city (void);
  int calculate_ticket_cost (void);
  int calculate_revenue (void);
  int find_show_same_city (void);
  int find_show_length (void);
  int find_show_price (void);
  int sort_by_show_code (void);
  int sort_by_start_date (void);
  int update_array (void);
  int end_program (void);
  int end_first_sequence (void);
 
  /* Function Prototype Only*/
  /*|||||||||||||||||||||||||||||||||||||||||||||||||||||||*/
  /******************************************************************************
   *MAIN                                                                        *
   *                                      MAIN                                  *
   *               MAIN                                                         *
   *                                                MAIN                        *
   *****************************************************************************/                                                                     
int main (void)
  {
    //Variables
    struct show *current, *first, *travel, *trailer;
    current = first = travel= trailer= NULL;
   
    
    char inputChar;
    char userChar;
    int control=1;
    int controL2 =1;
    int i =0;
  
  
printf("\n\n\nincomplete \n\n");




//BEGIN INPUT OPTIONS
 
while(control == 1)
   {
     
     
     

printf("\n\n\n\nPlease select an input option:\n\n(A): Detailed, user assisted entry method\n(B): File entry method\n(Q): to exit data entry\n");
     
     
 scanf("%c",&inputChar);
     
     switch(inputChar)
       { 
	 inputChar = getchar();
       case 'a':;
       case 'A': 
	  
	 printf("\nYou have selected a detail, user assisted entry method.\n");
       

	    

       
	first = inputShowdata();
	break;
	  
       case'b':;
       case'B':inputFile(first);break;
       case'q':;
       case'Q':control=end_first_sequence();break;
       default: printf("Please select A,B, or Q:");break;
	     
       }
   }   

//END USER INPUT OPTIONS
/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
USER DRIVEN SECTION++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*///++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 control = 1;
 while (control == 1)
   {
     printf("\n\n\nPlease make a selection:\n\nSEARCH:\nA) Type of Show\nB) Theater Location\nC)Date\n\nCALCULATE:\nD)Calculate cost of tickets\n\nSORT BY:\nE)Number of Performances\nF) Less than given cost\nG) Before or After given date\nH)Show in the same city\nI) Sort by show code\nJ) Sort by show date\nK) Update the array data\nQ)End Program\n\n");
    
     userChar = getchar();
     userChar = getchar();
     switch(userChar)
       {
       case 'a':;
       case 'A': search_by_show_designation();break;
      
       case 'b':;
       case'B': search_by_show_date();break;
                   
       case'c':;
       case'C': search_by_city();break;
       
       case'd':;
       case'D': calculate_ticket_cost();break;
       
       case'e':;
       case'E': calculate_revenue();break;
       
       case'f':;
       case'F': find_show_same_city();break;
       
       case'g':;
       case'G': find_show_length();break;
       
       case'h':;
       case'H': find_show_price();break;
       
       case'i':;
       case'I': sort_by_show_code();break;
       
       case'j':;
       case'J': sort_by_start_date();break;
       
       case'k':;
       case'K': update_array();break;
       
       case'q':;
       case'Q': control = end_program();break;
       
       default: printf("Invalid input, please select again");break;
       }
   }
 
 return 0;

}

#include "function_def.c"



