
class caller{
    synchronized static void callme(String msg){ //If u remove the synchronized this will be the output "[ learn[ java[ language]]]"
        System.out.print("[ " +msg);
        try
        {
            Thread.sleep(1000);
        }
        catch(InterruptedException e)
        {
            System.out.println(e);
        }
        System.out.println(" ]" );
    }
}
class call extends Thread{
    String msg;
    call(String m)
    {
        msg =m;
    }
    public void run()
    {
        caller.callme(msg);
    }
}

public class Program8{
    public static void main(String[] args) {
        call obj1 =  new call("learn");
        call obj2 =  new call("java");
        call obj3 =  new call("language");
        obj1.start();
        obj2.start();
        obj3.start();
    }
}