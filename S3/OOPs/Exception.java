import java.io.*;
import java.util.*;
class InvalidNumber extends Exception {
    public InvalidNumber(String str){
        super(str);
    }
}
class Exception1{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the no. of elements");
        int n = sc.nextInt();
        int i;
        int A[] = new int[n];
        System.out.println("Enter the elements");
        for( i = 0;i<n;i++){
            A[i] = sc.nextInt();
        }
        System.out.println("The elements are");
        for(i = 0;i<n;i++){
            System.out.println(A[i]);
        }
        try{
            if(A[i]<=0){
                throw new InvalidNumber("Invalid number");
            }
            else{
                System.out.println("Valid");
            }
        }catch(InvalidNumber m){
            System.out.println(m);
        }

    }
}
