import java.util.Scanner;
import distance.DistanceConverter;
import time.TimeConverter;

public class MainApp {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Distance Conversion
        System.out.print("Enter distance in meters: ");
        double meters = scanner.nextDouble();

        double kilometers = DistanceConverter.metersToKilometers(meters);
        System.out.println("Distance in kilometers: " + kilometers);

        System.out.print("Enter distance in miles: ");
        double miles = scanner.nextDouble();

        kilometers = DistanceConverter.milesToKilometers(miles);
        System.out.println("Distance in kilometers: " + kilometers);

        // Time Conversion
        System.out.print("Enter time in hours: ");
        double hours = scanner.nextDouble();

        double minutes = TimeConverter.hoursToMinutes(hours);
        System.out.println("Time in minutes: " + minutes);

        double seconds = TimeConverter.hoursToSeconds(hours);
        System.out.println("Time in seconds: " + seconds);

        // Close the scanner to avoid resource leak
        scanner.close();
    }
}