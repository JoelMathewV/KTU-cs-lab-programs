import java.io.*;
import java.util.Scanner;
class Numbers{
    public static void main(String[] args) {
        File f = new File("numbers.txt");
        try{
            f.createNewFile();
            FileWriter fwrite = new FileWriter("numbers.txt");
            fwrite.write("123456");
            fwrite.close();
            Scanner s = new Scanner(f);
            int a=0;
            while(s.hasNextInt()){
                a = s.nextInt();
            }
            int n = 0;
            while(a!=0){
                n = n*10+a%10;
                a = a/10;
            }
            System.out.println(n);
            s.close();
        }
        catch (IOException e){
            System.out.println("An error occured");
        }
    }
}