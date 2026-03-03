/*
Qs.Print Numbers from 1 to 5
*/
class PrintNumbers{
  
    void Print(int n){
       if(n == 6){
        return;
       }
       System.out.println(n);
       Print(n+1); 
       
    }
}
public class recursion1 {
 public static void main(String[] args) {
        int n= 1;
        PrintNumbers p = new PrintNumbers();
        p.Print(n);
 }    
}
