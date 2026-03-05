import java.util.*;

public class SingleLL2 {
    public static void main(String[] args) {
        LinkedList<String> list = new LinkedList<String>();

        list.addFirst("a");
        list.addFirst("is");

        System.out.println(list);

        list.addLast("Okie");
        System.out.println(list);

        System.out.println(list.size());

        for(int i=0; i<list.size(); i++){
           
            System.out.println(list.get(i)+" -> ");
        }
        for(String l: list){
            System.out.println(l+"-> ");
        }

        list.removeFirst();
        System.out.println(list);

        list.removeLast();
        System.out.println(list);

        list.remove(0);
        System.out.println(list);

        
    }
}
