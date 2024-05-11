import java.util.Scanner;
class Staf {
    int StaffID, Phone;
    float Salary;
    String Name;
    Staf(int staffID, String name,int phone,float salary){
        StaffID = staffID;
        Name = name;
        Phone = phone;
        Salary = salary;
    }
}
class Teaching extends Staf {
    String Domain;
    int Experience;
    Teaching(int staffID, String name,int phone,float salary,String domain, int experience){
        super(staffID, name, phone, salary);
        Domain = domain;
        Experience = experience;
    }
    void display(){
        System.out.println("*******TEACHING STAFF**********");
        System.out.println("StaffID: " + StaffID);
        System.out.println("Name: " + Name);
        System.out.println("Phone: " + Phone);
        System.out.println("Salary: " + Salary);
        System.out.println("Domain: " + Domain);
        System.out.println("Experience:" + Experience);
        }
    }
class Technical extends Staf {
    String Skill;
    Technical(int staffID, String name,int phone,float salary,String skill){
        super(staffID, name, phone, salary);
        Skill = skill;
    }
    void display(){
        System.out.println("**********TECHNICAL STAFF**********");
        System.out.println("StaffID: " + StaffID);
        System.out.println("Name: " + Name);
        System.out.println("Phone: " + Phone);
        System.out.println("Salary: " + Salary);
        System.out.println("Skill: " + Skill);
    }
}
class Contract extends Staf {
    int Duration;
    Contract(int staffID, String name,int phone,float salary,int duration){
        super(staffID, name, phone, salary);
        Duration = duration;
    }
    void display(){
        System.out.println("**********CONTRACT STAFF**********");
        System.out.println("StaffID: " + StaffID);
        System.out.println("Name: " + Name);
        System.out.println("Phone: " + Phone);
        System.out.println("Salary: " + Salary);
        System.out.println("Duration: " + Duration);
        }
}
public class Program2{
    public static void main(String[] args){
        Scanner inp = new Scanner(System.in);
        System.out.println("Enter The StaffID :");
        Teaching st1 = new Teaching(001, "Venugopal", 12345, 700000, "AInDS", 20);
        Technical tech1 = new Technical(001, "Venugopal", 12345, 700000, "Web Developer");
        Contract cot1 = new Contract(001, "Venugopal", 12345, 700000, 5);
        st1.display();
        tech1.display();
        cot1.display();
    }
}