import Package2.Packk;
//Save this file the same place as the Package2 folder
import java.util.Scanner;
public class Program3{
    public static void main(String[] args){
        double dis,val;
        Packk di = new Packk();
        Scanner inp = new Scanner(System.in);
        System.out.println("\n\nMAIN MENU: ");
        System.out.println("1.Meter to Kilometer\n2.Miles to Kilometer\n3.Kilometer to Meters\n4.Kilometer to Miles\n5.Hours to Minutes\n6.Hours to Seconds\n7.Minutes to Hours\n8.Seconds to Hours");
        System.out.println("Enter Distance in Meters");
        dis = inp.nextDouble();
        di.me_to_km(dis);
        System.out.println("Enter Distance in Miles");
        dis = inp.nextDouble();
        di.mi_to_km(dis);
        System.out.println("Enter Distance in KiloMeters");
        dis = inp.nextDouble();
        di.km_to_me(dis);
        System.out.println("Enter Distance in KiloMeters");
        dis = inp.nextDouble();
        di.km_to_mi(dis);
        System.out.println("Enter Time in Hours");
        val = inp.nextDouble();
        di.ho_to_min(val);
        System.out.println("Enter Time in Hours");
        val = inp.nextDouble();
        di.ho_to_sec(val);
        System.out.println("Enter Time in Minutes");
        val = inp.nextDouble();
        di.min_to_ho(val);
        System.out.println("Enter Time in Seconds");
        val = inp.nextDouble();
        di.sec_to_ho(val);
    }
}