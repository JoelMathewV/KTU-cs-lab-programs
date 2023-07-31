#include<stdio.h>
int main(){
    int incoming, outgoing, buck_size, n, store = 0;
    printf("Enter bucket size, outgoing rate and no of inputs: ");
    scanf("%d %d %d", &buck_size, &outgoing, &n);

    while (n != 0) {
        printf("Enter the incoming packet size : ");
        scanf("%d", &incoming);
        printf("Incoming packet size %d\n", incoming);
        if (incoming <= (buck_size - store)){
            store += incoming;
            printf("Bucket buffer size %d out of %d\n", store, buck_size);
        } else {
            printf("Dropped %d no of packets\n", incoming - (buck_size - store));
            printf("Bucket buffer size %d out of %d\n", store, buck_size);
            store = buck_size;
        }
        store = store - outgoing;
        printf("After outgoing %d packets left out of %d in buffer\n", store, buck_size);
        n--;
    }
}


// Output
// Enter bucket size, outgoing rate and no of inputs: 50 100 3
// Enter the incoming packet size : 50
// Incoming packet size 50
// Bucket buffer size 50 out of 50
// After outgoing -50 packets left out of 50 in buffer
// Enter the incoming packet size : 100
// Incoming packet size 100
// Bucket buffer size 50 out of 50
// After outgoing -50 packets left out of 50 in buffer
// Enter the incoming packet size : 20
// Incoming packet size 20
// Bucket buffer size -30 out of 50
// After outgoing -130 packets left out of 50 in buffer