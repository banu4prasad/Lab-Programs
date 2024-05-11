import java.util.Scanner;
interface Resume{
    void read_data();
    void print_biodata();
}
class Teacher implements Resume{
    String personal, quali, Achie;
    int exp;
    public void read_data(){
        Scanner inp = new Scanner(System.in);
        System.out.println("Teacher  Information:");
        System.out.println("Enter Personal Information: ");
        personal = inp.nextLine();
        System.out.println("Enter Qualification: ");
        quali = inp.nextLine();
        System.out.println("Enter Your Experinece");
        exp = inp.nextInt();
        inp.nextLine();
        System.out.println("Enter Your Achievement: ");
        Achie = inp.nextLine();
    }
    public void print_biodata(){
        System.out.println("Personal Information : " + personal);
        System.out.println("Qualification : " + quali);
        System.out.println("Experience : " + exp); 
        System.out.println("Achievements : " + Achie);
    }
}
class Student implements Resume{
    String person, disi;
    int res;
    public void read_data(){
        Scanner inp = new Scanner(System.in);
        System.out.println("Student Information");
        System.out.println("Enter Personal Information: ");
        person = inp.nextLine();
        System.out.println("Enter Your Displine: ");
        disi = inp.nextLine();
        System.out.println("Enter Your Result");
        res = inp.nextInt();
    }
    public void print_biodata(){
        System.out.println("Personal Information : " + person);
        System.out.println("Displine " + disi);
        System.out.println("Result : " + res); 
    }
}
class Program4{
    public static void main(String[] args){
        Teacher teach =  new Teacher();
        Student stud = new Student();
        stud.read_data();
        teach.read_data();
        stud.print_biodata();
        teach.print_biodata();
    }
}