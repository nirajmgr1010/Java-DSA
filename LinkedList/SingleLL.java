public class SingleLL{

    private int size;
    private Node head;
    SingleLL(){
        this.size =0;
    }
    class Node{
        String data;
        Node next;

        Node(String data){
            this.data = data;
            this.next = null;
            size++;
        }
    }
      
     //add - first, last
     public void addFirst(String data){
        Node newNode = new Node(data);
        if(head == null){
          head = newNode;
          return;
        }
        newNode.next = head;
        head = newNode;
       
     }
 
    //Add last
     public void addLast(String data){
         Node newNode = new Node(data);
         if(head == null){
            head = newNode;
            return;
         }
         Node temp = head;
         while (temp.next != null) {
                temp = temp.next;
         }
         temp.next = newNode;
         newNode.next = null;
     }

     public void deleteFirst(){

        if(head == null){
            System.out.println("The list is Empty");
            return;
        }
        
        size--;
        head = head.next;
       

     }

     public void deleteLast(){

        if(head == null){
            System.out.println("The list is Empty");
            return;
        }
         size--;
        if(head.next == null){
            head = null;
            return;
        }
        Node secondLast = head;
        Node lastNode = head.next; // head.next = null -> lastNode = null
        while(lastNode.next != null){ //null.next give error
             lastNode = lastNode.next;
             secondLast = secondLast.next;
        }

        secondLast.next = null;

     }
     public void Traverse(){

        if(head==null){
            System.out.println("list is empty");
        }
          Node temp = head;
         while (temp != null) {
            System.out.println(temp.data+"-> ");
                temp = temp.next;
         }
         System.out.println("NULL");
     }

     public int getSize(){
        return size;
     }
    public static void main(String[] args) {
        SingleLL list = new SingleLL();
        list.addFirst("a");
        list.addFirst("is");
          
        list.Traverse();
        list.addLast("list");
        list.Traverse();

        list.deleteFirst();
        list.Traverse();

        list.deleteLast();
        list.Traverse();

         System.out.println(list.getSize());
    }
}