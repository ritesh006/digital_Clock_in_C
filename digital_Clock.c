#include<stdio.h>
/*adding standerd header file for predefined function which is used in 
every standerd program */

#include<windows.h>
/*  this is advance library of grapics here we are using this because of we 
    are using two of this function from this library like sleep and system */

/*-------------------------Main function starts from Here--------------------*/
int main()
{
    int hour, min, sec;
    /*declaring three variable for hour, minute and second */

    printf("Set Time:\n"); /*Message for user */
    printf("Hours : ");    /*Message for user */
    scanf("%d",&hour);     /* taking hours input from user */

    printf("Minute: ");  /* Message for user*/
    scanf(" %d",&min);   /* Taking minute input from user*/

    printf("second: ");  /*Message for user*/
    scanf("%d",&sec);    /*Taking Seconds input from user*/


/* checking condition after user puts all three input if hour greter then 12 
   or minute greter then 60 or seconds greater then 60 out of three any any 
   condition if true printing message for user to provide proper inputs */
    if(hour > 12 || min > 60 || sec >60)
    {
        printf("Please Provide Correct Inputs");
        /*Message for user*/
    }

/*---------------------While Loop start from here-------------------------- */
    while (1)   /*this loop excutes for infinity*/
    {
        sec++; /*variable for second starts incrementd by one sec = sec + 1 */

            if(sec > 59)    /*if second greter then 59 */
            {
                min++;      /* minute incremented by one min = min + 1 */
                sec = 0;   /* and second set to zero and starts from one again*/
            }

                if(min > 59) /*if minute greter then 59 */
                {
                    hour++; /* minute incremented by one hour = hour + 1 */
                    min = 0;
                  /* and minute set to zero and starts from one again*/
                }

                    if(hour > 12) /*if minute greter then 12 */
                    {
                        hour = 1; /* hour variable sets to 1 again*/
                    }


            printf("Clock: \n");    /*Message for User*/

            printf("%d : %d : %d",hour, min, sec);
            /* Displaying clock in 00: 00: 00 in this format*/

            Sleep(1000);
            /* this is a predefined function for adding delay to every iteration
               by 1000 = 1 second and by this second variable incremented by every
               second and other condition in loops gives effect of real clock*/
            
            system("cls");
            /*  this is predefined function for clearing the screen after every
                iteration and will gives effect of like screen is updation time
                after every seconds */    

    }
/*  -------------------------------while loop end here------------------------*/

    return 0;
    
}
/*  ----------------------------Main ends here -------------------------------*/