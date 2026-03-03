import java.util.Stack;
public class Stackpractice2 {
    public static void main(String[] args) {
        Stack<String> st = new Stack<>();
        st.push("Kulshingh"); 
        st.push("Sallu");
        st.push("Shreya");
        st.push("Bishal");
        st.push("Sahil");
        System.out.println(st.size());
        System.out.println(st); // A.S = O(n);
        st.pop();
        System.out.println(st+" "+st.size()); 
        System.out.println(st.peek()); 
        System.out.println(st.pop()); //It return the topmost element and then removes it
        String s = st.pop(); //It returns the topmost elemenet and then removes it and the element are stored in variable
        System.out.println(s);
    }
}
  