#include<stdio.h>
#include<signal.h>
#include<stdlib.h>

int count =0;
void signal_handler(int sig){

}
int main(){
    signal(AIGINT, signal_handler);

    while(1){

    }
}