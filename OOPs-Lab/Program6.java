//Exception Handling
import java.util.InputMismatchException;
import java.util.Scanner;
class Arr{
    int n;
    Arr(int n){
        this.n = n;
    }
    public void operatio(){
        int[] arry = new int[n];
        Scanner inp = new Scanner(System.in);
        System.out.println("Enter The Elemnts");
        try{
            for(int i=0; i<n; i++){
                System.out.print((i+1)+" : ");
                int num = inp.nextInt();
                inp.nextLine();
                arry[i] = num;
                System.out.println();
            }
            System.out.println("Enter The Index to Find The Value");
            int ind = inp.nextInt();
            System.out.println("The Value = " + arry[ind]);
            int min = arry[0];
            for(int i = 1;i<n;i++){
                if(arry[i] < min){
                    min = arry[i];
                }
            }
            for(int i = 0;i<n;i++){
                int div = arry[i]/min;
                System.out.println("Value = " +div);
            }
        }catch(InputMismatchException e1){
            System.out.println("Input Mismatch");
        }catch(ArrayIndexOutOfBoundsException e2){
            System.out.println("Index out of bounds");
        }catch(ArithmeticException e3){
            System.out.println("Divide by zero");
        }
    }
}
public class Program6{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter The Range of The Array");
        int num = sc.nextInt();
        Arr ar = new Arr(num);
        ar.operatio();
    }
}