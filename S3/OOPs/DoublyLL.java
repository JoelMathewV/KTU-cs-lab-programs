import java.util.*;
public class DoublyLL {
    public static void main(String args[]) {
        LinkedList<String> ll = new LinkedList<String>();
        ll.add("dinoy");
        ll.add("dhanya");
        ll.add("kuttan");
        ll.add("deepu");
        ll.add("sangi");
        System.out.println("List After Insertion : ");
        Iterator<String> itr = ll.iterator();
        while (itr.hasNext()) {
        System.out.println(itr.next());
        }
        ll.remove("dinoy");
        ll.remove(2);
        System.out.println("List After Removing : ");
        Iterator<String> rti = ll.iterator();
        while (rti.hasNext()) {
        System.out.println(rti.next());
        }
        }
}
