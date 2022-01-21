class Employee{
    String Name;
    int Age;
    int PhoneNumber;
    String Address;
    int Salary;
    Employee(String Name,int Age,int PhoneNumber,String Address,int Salary){
        this.Name= Name;
        this.Age=Age;
        this.PhoneNumber=PhoneNumber;
        this.Address=Address;
        this.Salary=Salary;
    }
    void printSalary(){
        System.out.println("Salary is "+ this.Salary);
    }

}
class Officer extends Employee{
    String specialization;
    Officer(String Name,int Age,int PhoneNumber,String Address,int Salary,String specialization){
        super(Name, Age, PhoneNumber, Address, Salary);
        this.specialization=specialization;
    }
}
class Manager extends Employee{
    String department;
    Manager(String Name,int Age,int PhoneNumber,String Address,int Salary,String department){
        super(Name,Age,PhoneNumber,Address,Salary);
        this.department=department;
    }
}

public class Joel {
    public static void main(String[] args) {
        Officer A = new Officer("XY",32,234567,"AB street",40000,"AI");
        Manager B = new Manager("YX",54,2345432,"BA street",60000,"Accounting");
        A.printSalary();
        B.printSalary();

    }
}