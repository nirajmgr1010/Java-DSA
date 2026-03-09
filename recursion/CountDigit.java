//5️⃣ Count number of digits in a number
public class CountDigit{
  public static int CountDigit(String digit,int i){
      if(i == digit.length()-1){
        return 1;
      }

      return 1 + CountDigit(digit, i+1);
        
  }
  public static void main(String[] args) {
    String digit = "57367";
      int result = CountDigit(digit, 0);
      System.out.println(result);
  }
}
