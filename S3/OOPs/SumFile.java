import java.io.FileWriter;
import java.io.FileReader;
import java.io.IOException;
import java.util.Scanner;
import java.util.StringTokenizer;
public class SumFile {
    public static void main(String[] args) {
        try{
            int sum =0;
            FileWriter fw = new FileWriter("number.txt");
            fw.write("1 2 3 4 5\n 3 4");
            fw.close();
            FileReader fr = new FileReader("number.txt");
            Scanner reader = new Scanner(fr);
            String data="";
            while(reader.hasNextLine()){
                data = reader.nextLine();
                StringTokenizer token = new StringTokenizer(data);
                while(token.hasMoreTokens()){
                    sum += Integer.parseInt(token.nextToken());
                }
            }
            System.out.println("Sum is "+sum);
            reader.close();
            fr.close();
        }catch(IOException e){
            System.out.print("Error");
        }
    }
}