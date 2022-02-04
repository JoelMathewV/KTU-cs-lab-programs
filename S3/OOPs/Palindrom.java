import java.util.*;
class Palindrom{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int flag = 0;
        String s = sc.nextLine();
        for(int i=0;i<s.length()/2;i++){
            if(s.charAt(i) == s.charAt(s.length()-1-i)){
                flag = 1;
            }
        }
        if(flag==0){
            System.out.println("not a palindrom");
        }
        else{
            System.out.println("it is a palindrom");
        }
        sc.close();
    }
}