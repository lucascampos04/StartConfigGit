#include <stdio.h>
#include <stdlib.h>

int main(){
    char username[100];
    char email[300];

    printf("Username: ");
    scanf("%s", username);

    printf("\nEmail: ");
    scanf("%s", email);

    char gitConfigCmd[200];
    
    sprintf(gitConfigCmd, "git config --global user.name \"%s\"", username);
    system(gitConfigCmd);

    sprintf(gitConfigCmd, "git config --global user.email \"%s\"", email);
    system(gitConfigCmd);

    printf("Configuration success");
}