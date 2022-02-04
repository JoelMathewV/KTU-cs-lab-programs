import java.io.FileWriter;
import java.io.FileReader;
import java.io.IOException;
import java.util.Scanner;
public class File {
    public static void main(String[] args) {
        try{
            FileWriter fw = new FileWriter("sample.txt");
            fw.write("Hello World");
            fw.close();
            FileReader fr = new FileReader("sample.txt");
            Scanner reader = new Scanner(fr);
            while(reader.hasNextLine()){
                String data = reader.nextLine();
                System.out.println(data);
            }
            reader.close();
            fr.close();
        }catch(IOException e){
            System.out.print("Error");
        }
    }
}