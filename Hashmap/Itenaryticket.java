import java.util.HashMap;

public class Itenaryticket {
   
    public static String getStart(HashMap<String, String> tick){
        HashMap<String, String> reverHashMap = new HashMap<>();
    
        for(String key : tick.keySet()){
            //key -> key ; val -> tick.get(key)
            reverHashMap.put(tick.get(key), key);
        }

        for(String key : tick.keySet()){
            if(!reverHashMap.containsKey(key)){
                return key;
            }
        }

        return null;
    
    }
  
    public static void main(String[] args) {
        HashMap<String, String> tickets = new HashMap<>();
        tickets.put("Chennai", "Bengaluru");
        tickets.put("Mumbai", "Delhi");
        tickets.put("Goa", "Chennai");
        tickets.put("Delhi", "Goa");

        String start = getStart(tickets);
      
        while(tickets.containsKey(start)){
            System.out.println(start);
            start = tickets.get(start);
        }
        System.out.println(start);
   
    }
}
