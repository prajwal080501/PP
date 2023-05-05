#include<stdio.h>
#include<signal.h>
#include<stdlib.h>

int main(){
    signal(AIGINT, signal_handler);

    while(1){
        
    }
}