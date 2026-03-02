import java.util.InputMismatchException;
import java.util.Scanner;

class Operation{
    int tos = -1;
    int size = 10;
    int[] item = new int[size];
Scanner sc = new Scanner(System.in);
  void pop(){
    if(isEmpty()){
        System.out.println("the stack is empty");
    }
   else{
    System.out.println("Before pop Operation : "+item[tos]);
    tos--;
   }
  }


  //Push method
  void push(){
       if(isFull()){
        System.out.println("The stack is full");
       }
       else{
        try{
        System.out.println("Enter the value to be inserted");
        int data = sc.nextInt();
        tos ++;
        item[tos] = data;
        System.out.println(data + " pushed to stack.");
        }
        catch(InputMismatchException e){
            System.out.println(e);
        }
        
       }
  }
  boolean isFull(){
   if(tos>=size-1){
    return true;
   }
   else{
    return false;
   }
  }

  boolean isEmpty(){
    if(tos<0){
        return true;
    }
    else{
        return false;
    }
  }
  void display(){
    if(isEmpty()){
        System.out.println("Stack is Empty");
    }
    else{
          System.out.println("Stack elements (top to bottom):");
            for (int i = tos; i >= 0; i--) {
                System.out.println(item[i]);
            }
    }
  }
}
// Main class
public class Stack {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Operation o = new Operation();
        int option;

        while (true) {
            System.out.println("\nStack Options Menu:");
            System.out.println("1. Push");
            System.out.println("2. Pop");
            System.out.println("3. Display");
            System.out.println("4. Exit");
            System.out.print("Enter your choice: ");

            try {
                option = sc.nextInt();

                switch (option) {
                    case 1 -> o.push();
                    case 2 -> o.pop();
                    case 3 -> o.display();
                    case 4 -> {
                        System.out.println("Exiting program. Goodbye!");
                        System.exit(0);
                    }
                    default -> System.out.println("Invalid Option! Try again.");
                }
            } catch (InputMismatchException e) {
                System.out.println("Invalid input! Please enter an integer between 1-4.");
                sc.next(); // Clear invalid input
            }
        }
    }
}
