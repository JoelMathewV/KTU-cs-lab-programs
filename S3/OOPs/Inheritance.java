class Employee{
    String name;
    int age;
    long phoneNo;
    String address;
    int salary;
    Employee(String name, int age, long phoneNo, String address, int salary){
        this.name = name;
        this.age = age;
        this.phoneNo = phoneNo;
        this.address = address;
        this.salary = salary;
    }
}
class Officer extends Employee{
    String specialisation;
    Officer(String name, int age, long phoneNo, String address, int salary, String specialisation){
        super(name, age, phoneNo, address, salary);
        this.specialisation = specialisation;
    }
}
class Manager extends Employee{
    String department;
    Manager(String name, int age, long phoneNo, String address, int salary, String department){
        super(name, age, phoneNo, address, salary);
        this.department = department;
    }
}
public class Inheritance {
    public static void main(String[] args) {
        Officer joel = new Officer("Joel", 19, 8075019694L, "adoor", 100000, "forensic");
        Manager ruben = new Manager("ruben", 19, 9873421055L, "kollam", 100000, "IT");
        System.out.println(joel.salary);
        System.out.println(ruben.salary);
    }
}