public class ReverseNumber {
    public static void ReverseNumber(int digit){
         if(digit == 0){
            return;
         }
          int result = ReverseNumber(digit%10);

    }
    public static void main(String[] args) {
        
    }
}
