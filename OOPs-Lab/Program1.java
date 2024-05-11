import java.util.Scanner;
class Stud {
    int usn,pho;
    String name,branch;
    Stud(int usn,String name,int pho,String branch)
    {
    this.usn = usn;
    this.name = name;
    this.pho = pho;
    this.branch = branch;
    }
    void display(int x){
        System.out.println("Details of "+ (x+1) +" Student :");
        System.out.println("The USN :" + usn);
        System.out.println("The Name :" + name);
        System.out.println("The Phone No :" + pho);
        System.out.println("The Branch :" + branch);
    }
}
public class Program1{
    public static void main(String[] args) {
        int i,n;
        Scanner inp = new Scanner(System.in);
        System.out.println("Enter The Number Of Students");
        n = inp.nextInt();
        Stud s[] = new Stud[n];
        for(i=0;i<n;i++)
        {
            System.out.println("Enter The USN :");
            int us = inp.nextInt();
            inp.nextLine();
            System.out.println("Enter The Name");
            String na = inp.nextLine();
            System.out.println("Enter The Phone No. :");
            int po = inp.nextInt();
            inp.nextLine();
            System.out.println("Enter Your Branch");
            String br = inp.nextLine();
            s[i] = new Stud(us, na, po, br);
        }
        for(i=0;i<n;i++){
            s[i].display(i);
        }
    }
}