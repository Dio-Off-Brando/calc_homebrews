#include <tice.h>
#include <stdlib.h>
#include <keypadc.h>
#define MAX_STRING_SIZE 30

/* Main function, called first */


void Hub(void){
    char arr[][MAX_STRING_SIZE] = {
        "1 memos polynome",
        "2 calculateur"
    };

    int arrLength = sizeof arr / sizeof arr[0];


    int i = 0;
    while ( i < arrLength) {
        os_PutStrLine(arr[i]);
        os_NewLine();
        i++;
    }    



}

void ExponentielMemo(void) {
    os_ClrHome();
    
    // begin content
    os_PutStrLine("e^0=1");
    os_NewLine();
    os_PutStrLine("(e^x)'=e^x (deriv)");
    os_NewLine();
    os_PutStrLine("e^x>0");
    os_NewLine();
    os_PutStrLine("e^a*e^b=e^a+b");
    os_NewLine();
    os_PutStrLine("e^-a = 1/(e^a)");
    os_NewLine();
    os_PutStrLine("e^a-b = e^a/e^b");
    // end content
    while(!os_GetCSC());
    os_ClrHome();
    Hub();
    
}


void automated_polynome(void) {
    // formula: delta = b"2-4ac
    // (-b+sqrt(delta))/2a
    // 
    os_ClrHome();

    // doing the thing
    char a[5];
    char b[5];
    char c[5];
    //getting vars
    os_GetStringInput("a = ", a, 5);
    os_GetStringInput("b = ", b, 5);
    os_GetStringInput("c = ", c, 5);
    
    int aint = atoi(a);
    free(a);
    int bint = atoi(b);
    free)b);
    int cint = atoi(c);
    free(c);
   
    // TODO: finish it, not using the function tomorrow
    int delta = (bint*bint)-4*aint*cint;
    int x1 = -b;

    os_ClrHome();

    while(!os_GetCSC());
    os_ClrHome();
    Hub();

}

int main(void) {

    os_ClrHome();


    Hub();
    while (kb_Data[1] != kb_Del){
        
        kb_Scan();

        if (kb_Data[3]==kb_1)  {
            automated_polynome();
        }


    }    
    

    while (!os_GetCSC());

    /* Return 0 for success */
    return 0;
}
