public class Display {
    public synchronized void print(String msg) {
        System.out.print("[" + msg);
        try {
            Thread.sleep(1000);
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }
        System.out.println("]");
    }
}

class SyncThread extends Thread {
    private Display d;
    private String msg;

    public SyncThread(Display d, String msg) {
        this.d = d;
        this.msg = msg;
    }

    public void run() {
        d.print(msg);
    }
}

class Synchronisation {
    public static void main(String args[]) {
        Display d = new Display();
        SyncThread t1 = new SyncThread(d, "Hello");
        SyncThread t2 = new SyncThread(d, "World");
        t1.start();
        t2.start();
    }
}
