#include <tice.h>
#include <stdlib.h>
#include <keypadc.h>
#define MAX_STRING_SIZE 30

/* Main function, called first */


void Hub(void){
    char arr[][MAX_STRING_SIZE] = {
        "1 expression angle",
        "2 expression analytique",
        "3 equation cartesienne",
        "4 milieu segment",
        "5 al kashi mesure segment",
        "6 al kashi mesure angle",
        "7 equation cart mediane"
    };

    int arrLength = sizeof arr / sizeof arr[0];


    int i = 0;
    while ( i < arrLength) {
        os_PutStrLine(arr[i]);
        os_NewLine();
        i++;
    }    



}

void aireTriangle() {
    os_ClrHome();
    

    while (!os_GetCSC());
    os_ClrHome();
    Hub();
}

void equationMedianeSegment(){
    os_ClrHome();
    os_PutStrLine("coef dir =>");
    os_NewLine();
    os_PutStrLine("(yB-yA)/(xB-xA)");


    while (!os_GetCSC());
    os_ClrHome();
    Hub();

}


void milieuSegment(void) {
    os_ClrHome();
    os_PutStrLine("I = milieu[AB]");
    os_NewLine();
    os_PutStrLine("I( (xA+xB)/2 ; (yA+yB)/2)");

    while (!os_GetCSC());
    os_ClrHome();
    Hub();

}



void alKashi(void) {
    os_ClrHome();
    os_PutStrLine("soit un triangle vecteur A B C");
    os_NewLine();
    os_PutStrLine("angle P est angle A B");
    os_NewLine();
    os_NewLine();
    os_PutStrLine("c=sqrt(a^2+b^2-2ab*cos(P))");
    os_NewLine();
    os_PutStrLine("b=a*cos(P)+");
    os_NewLine();
    os_PutStrLine("sqrt(c^2-a^2*sin(P)^2)");

    while (!os_GetCSC());
    os_ClrHome();
    Hub();
}


void alKashiAngle(void) {
    os_ClrHome();
    os_PutStrLine("soit un triangle vecteur A B C");
    os_NewLine();
    os_PutStrLine("angle P est angle A B");
    os_NewLine();
    os_NewLine();
    os_PutStrLine("P=arccos((a^2+b^2-c^2)/(2a");
    os_NewLine();
    os_PutStrLine("b))");

    while (!os_GetCSC());
    os_ClrHome();
    Hub();

}

void applicationProdScal() { 
    os_ClrHome();
    os_PutStrLine("vecDir =>");
    os_NewLine();
    os_PutStrLine("2 points A et B E (d)");
    os_NewLine();
    os_PutStrLine("a*x+b*y+c = 0");
    os_NewLine();
    os_PutStrLine("x y E point droite");
    os_NewLine();
    os_PutStrLine("u(-b; a) ");
   
    
    while (!os_GetCSC());


    os_ClrHome();
    Hub();


}




void expressionAngle(void){
    os_ClrHome();
    os_PutStrLine("u.v= |u| * |v| cos(u, v)");
    os_NewLine();
    os_PutStrLine("cos(u,v) = (u*v)/(|u|*|v|)");

    while (!os_GetCSC());
   


    // on retourne au menu
    
    os_ClrHome();
    Hub();


};

void expressionAnalytique(void) {
    os_ClrHome();
    os_PutStrLine("u.v = xu*xv +yu*yv");

    while (!os_GetCSC());

    os_ClrHome();
    Hub();

};




int main(void) {

    os_ClrHome();


    Hub();
    while (kb_Data[1] != kb_Del){
        
        kb_Scan();

        if (kb_Data[3] == kb_1) {
            expressionAngle();
        };

        if (kb_Data[4] == kb_2) {
            expressionAnalytique();    

        };

        if (kb_Data[5] == kb_3) {
            applicationProdScal();
    
        };

        if (kb_Data[3] == kb_4){
            milieuSegment();
        };

        if (kb_Data[4] == kb_5){
            alKashi();
        };
        
        if (kb_Data[5] == kb_6){
            alKashiAngle();
        };

        if (kb_Data[3] == kb_7) {
            equationMedianeSegment();
        }


    }    
    

    while (!os_GetCSC());

    /* Return 0 for success */
    return 0;
}
