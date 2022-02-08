abstract class Shape{
    abstract void numberOfSides();
}
class Rectangle extends Shape{
    void numberOfSides(){
        System.out.println("Number of sides is 4");
    }
}
class Triangle extends Shape{
    void numberOfSides(){
        System.out.println("Number of sides is 3");
    }
}
class Hexagon extends Shape{
    void numberOfSides(){
        System.out.println("Number of sides is 6");
    }
}
public class Abstract {
    public static void main(String[] args) {
        Shape a ;
        a = new Rectangle();
        a.numberOfSides();
        a = new Triangle();
        a.numberOfSides();
        a = new Hexagon();
        a.numberOfSides();

    }
}