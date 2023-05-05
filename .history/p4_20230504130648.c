#include<stdio.h>
#include<signal.h>
#include<stdlib.h>


int main() {
    signal(SIGINT, signal_handler);
    while(1){
        
    }
}