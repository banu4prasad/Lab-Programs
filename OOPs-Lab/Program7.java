import java.io.*;
import java.io.FileWriter;
import java.util.Scanner;
class Program7{
    public static void main(String[] args){
        try{
            FileWriter writee = new FileWriter("C:\\Users\\nidhi\\Documents\\Files\\wrtieFile.txt");
            Scanner scan = new Scanner(System.in);
            System.out.println("Enter The Contents");
            String x = scan.nextLine();
            writee.write(x);
            writee.close();
            System.out.println("Successfully printed to the file");
            FileReader fw = new FileReader("C:\\Users\\nidhi\\Documents\\Files\\writeFile.txt");
            Scanner s = new Scanner(fw);
            while(s.hasNextLine()){
                String li = s.nextLine();
                System.out.println(li);
            }
        fw.close();
        }catch(Exception e){
            System.out.println("An error occurred");
            e.printStackTrace();
        }
    }
}