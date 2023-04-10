#include <tice.h>
#include <stdlib.h>
#include <keypadc.h>
#define MAX_STRING_SIZE 30

/* Main function, called first */


void Hub(void){
    char arr[][MAX_STRING_SIZE] = {
        "1 loi proba",
        "2 esperance",
        "3 ecart type",
        "4 variance"
    };

    int arrLength = sizeof arr / sizeof arr[0];


    int i = 0;
    while ( i < arrLength) {
        os_PutStrLine(arr[i]);
        os_NewLine();
        i++;
    }    



}


void variance(void){
    os_ClrHome();
    
    os_PutStrLine("var(X)=Pi*(xi-E(X))^2pour chaque xi");
    os_NewLine();
    os_PutStrLine("ex: pour E(X)=3/2");
    os_NewLine();
    os_PutStrLine("1/6(-2-E(x))^2");

    while(!os_GetCSC());
    os_ClrHome();
    Hub();
}

void LoiDesProbabilites(void){
    //clear screen
    os_ClrHome();
    
    os_PutStrLine("tableau avec 1ere ligne valeur;");
    os_NewLine();
    os_PutStrLine("2eme ligne proba d'obtenir cette val");

    //go back to hub
    while(!os_GetCSC());
    os_ClrHome();
    Hub();


}

void esperance(void){
    os_ClrHome();
    os_PutStrLine("E(X) est case bas * case up +");
    os_NewLine();
    os_PutStrLine("case bas1 * case up1 ");
    os_NewLine();
    os_PutStrLine("defavorable si E<0");
    os_NewLine();
    os_PutStrLine("equitable si E=0");
    os_NewLine();
    os_PutStrLine("favorable si E>0");

    //hub
    while(!os_GetCSC());
    os_ClrHome();
    Hub();
}


void ecartType(void){
    os_ClrHome();
    
    os_PutStrLine("g grec = sqrt(var(x))");


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
            LoiDesProbabilites();
        };

        if (kb_Data[4] == kb_2) {
            esperance();
        };
        
        if (kb_Data[5] == kb_3){
           ecartType();
        }

        if (kb_Data[3] == kb_4) {
            variance();
        }


    }    
    while (!os_GetCSC());

    /* Return 0 for success */
    return 0;
}
