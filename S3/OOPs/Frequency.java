import java.util.Scanner;

public class Frequency {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int frequency = 0;
        System.out.println("Enter the string");
        String s = sc.nextLine();
        System.out.println("Enter the character whose frequency is to be found");
        char a = sc.next().charAt(0);
        for(int i = 0; i<s.length();i++){
            if(s.charAt(i) == a){
                frequency += 1;
            }
        }
        System.out.println("the frequency is "+frequency);
        sc.close();
    }
}
