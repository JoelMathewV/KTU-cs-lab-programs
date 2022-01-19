//method overloading
import java.io.*;
import java.util.Scanner;
class Shape{
   void area(float r) {
       System.out.println("the area is "+3.14*r*r);
   }
   void area(int l, int b){
       System.out.println("the area is "+l*b);
   }
   void area(int l){
       System.out.println("the area is "+l*l);
   }}
   class MethodOverloading{
       public static void main(String[] args) {
           Shape s = new Shape();
           s.area(3,6);

   }}