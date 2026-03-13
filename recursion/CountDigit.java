//5️⃣ Count number of digits in a number
public class CountDigit{
  public static int CountDigit(String digit,int i){
      if(i == digit.length()-1){
        return 1;
      }

      return 1 + CountDigit(digit, i+1);
        
  }

  public static int CountIntDigit(int digit){

    if(digit == 0){
      return 0;
    }

    return 1 + CountIntDigit(digit/10); // 5736 1 //573 2 
  }
  public static void main(String[] args) {
    String digit = "57367";
    int Digit = 57364;
    int Result = CountIntDigit(Digit);
      int result = CountDigit(digit, 0);
      System.out.println(result);
      System.out.println(Result);
  }
}
