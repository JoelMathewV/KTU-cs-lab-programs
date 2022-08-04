#include<stdio.h>

int main(){
    int process[4] = {1,2,3,4};
    int bt[4] = {2,5,7,3};
    int wt[4] = {0,0,0,0};
    int tat[4] = {0,0,0,0};
    int priority[4] = {5,4,3,2};

    //Priority

    for(int i = 0; i<4; i++){
        for(int j = i+1; j<4; j++){
            if(priority[j]< priority[i]){
                // swap(&bt[i], &bt[j]);
                // swap(&process[i], &process[j]);
                int temp1 = bt[i];
                bt[i] = bt[j];
                bt[j]  = temp1;
                int temp2 = process[i];
                process[i] = process[j];
                process[j] = temp2;
                int temp3 = priority[i];
                priority[i] = priority[j];
                priority[j] = temp3;
            }
        }
    }
    

    //SJF

    // for(int i = 0; i<4; i++){
    //     for(int j = i+1; j<4; j++){
    //         if(bt[j]< bt[i]){
    //             // swap(&bt[i], &bt[j]);
    //             // swap(&process[i], &process[j]);
    //             int temp1 = bt[i];
    //             bt[i] = bt[j];
    //             bt[j]  = temp1;
    //             int temp2 = process[i];
    //             process[i] = process[j];
    //             process[j] = temp2;
    //         }
    //     }
    // }

    
    //FCFS
    for(int i = 0; i<4; i++){
        if(i == 0){
            wt[i] = bt[i];
        }
        else{
            wt[i] = wt[i-1] + bt[i-1];
            tat[i] = wt[i] + bt[i];
        }
    }
    for(int i=0; i<4; i++){
        printf("process %d tat %d wt %d \n", process[i], wt[i], tat[i]);
    }
    return 0;
}