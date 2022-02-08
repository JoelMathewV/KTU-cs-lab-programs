//constructor overloading
import java.io.*;
import java.util.Scanner;
class Shapes{
   int l,b;
   double r;
   public Shapes(double a){
       r = a;
   }

   public Shapes(int lenght, int breadth){
        l = lenght;
        b = breadth;
   }
   public Shapes(int side){
       l = side;
       b = side;
   }
   }
   class ConstructorOverloading{
   public static void main(String[] args) {
       Shapes circle = new Shapes(3.56);
       Shapes square = new Shapes(5);
       Shapes rectangle = new Shapes(3,6);
       System.out.println("area of circle is"+ circle.r * circle.r * 4 * 3.14);
       System.out.println("area of square is"+ square.l*square.b);
       System.out.println(rectangle.l+" "+rectangle.b);
   }}
