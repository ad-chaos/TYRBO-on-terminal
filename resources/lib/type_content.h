#ifndef TYPE_CONT_H
#define TYPE_CONT_H
//header file that contains the prototypes for functions that will be used for typing related actions

int single_type_disp(char* ,int,char);//function to display text to be typed.Parameters:(string,size of string)
int single_type_input(char*,int,char);
int type_disp(int,char);//function to display text to be typed.Parameters:(string,size of string)
int type_input(int,char);//function that takes input from user to play the game and tracks right and wrong inputs.Parameters:(string,size of string,rows,columns)
char* rand_string(char* ,int ,char*);
void type_launch(char*,char*,char );
char rand_mode();
#endif