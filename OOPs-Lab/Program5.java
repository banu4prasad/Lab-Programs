import java.util.Random;
class NumberGenerator2 implements Runnable {
    int number;
    public void run() {
        Random random = new Random();
        for (int i = 0;i<5;i++) {
            number = random.nextInt(100); // Generate random integer between 0 and 99
            Thread squareThread = new Thread(new SquareCalculator2(number));
            Thread cubeThread = new Thread(new CubeCalculator2(number));
            System.out.println("Generated Number: " + number);
            squareThread.start();
            cubeThread.start();
            try {
                Thread.sleep(1000); // Sleep for 1 second
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}
class SquareCalculator2 implements Runnable {
    private int number;
    public SquareCalculator2(int number) {
        this.number = number;
    }
    public void run() {
            int square = number * number;
            System.out.println("Square of " + number + ": " + square);
            try {
                Thread.sleep(1000); // Sleep for 1 second
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
    }
}
class CubeCalculator2 implements Runnable {
    private int number;
    public CubeCalculator2(int number) {
        this.number = number;
    }
    public void run() {
        //while (true) {
            //Random rand = new Random();
            //int number = rand.nextInt(100);
            int cube = number * number * number;
            System.out.println("Cube of " + number + ": " + cube);
            try {
                Thread.sleep(1000); // Sleep for 1 second
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        //}
    }
}
public class Program5{
    public static void main(String[] args) {
        //Random ran = new Random();
        //int numb = ran.nextInt(100);
        NumberGenerator2 numb = new NumberGenerator2();
        Thread t1 = new Thread(numb);
        t1.start();
    }
}

