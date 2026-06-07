import java.util.ArrayList;
import java.util.LinkedList;

public class ImpHash {
  static class HashMap<k,v> {
    private class Node{
        k key;
        v value;

        public Node(k key, v value){
            this.key = key;
            this.value = value;
        }
    }

    private int n; //n - nodes
    private int N; //N - buckets
    private LinkedList<Node> bucket[]; //N = buckets.length

    @SuppressWarnings("unchecked")
    public HashMap(){
     this.N = 4;
     this.bucket = new LinkedList[4];
     for(int i=0; i<4; i++){
        this.bucket[i] = new LinkedList<>();
     }
    }

  private int hashFunction(k key){ // 0 to N-1
    int bi = key.hashCode();
   return Math.abs(bi) % N;
  }
  private int searchInLL(k key, int bi){

    LinkedList<Node> ll = bucket[bi];
    for(int i=0; i<ll.size(); i++){
        if(ll.get(i).key == key){
            return i; // di
        }
    }

    return -1;
  }

  private void rehash(){
    LinkedList<Node> oldBucket[] = bucket;
    bucket = new LinkedList[N*2];

    for(int i=0; i<N*2; i++){
        bucket[i] = new LinkedList<>();
    }

    for(int i=0; i<oldBucket.length; i++){
        LinkedList<Node> ll = oldBucket[i];
        for(int j=0; j<ll.size(); j++){
            Node node = ll.get(j);
            put(node.key, node.value);
        }
    }
  }
    public void put(k key, v value){
             int bi = hashFunction(key);
             int di = searchInLL(key, bi); // data index
    
      if(di == -1){  //key doesn't exist
         bucket[bi].add(new Node(key, value));
      n++;
        }
      else{ //key exist
        Node node = bucket[bi].get(di);
        node.value = value;
    
    }

    double lambda = (double)n/N;
    if(lambda > 2.0){
      rehash(); 
    }
            }


    //get() 
    public v get(k key){
        int bi = hashFunction(key);
        int di = searchInLL(key, bi); // data index

        if(di == -1){  //key doesn't exist
        return null;
        }
        else{ //key exist
        Node node = bucket[bi].get(di);
        return node.value;
        }
    }

    //contains
    public boolean containsKey(k key){
          int bi = hashFunction(key);
          int di = searchInLL(key, bi); // data index
    
      if(di == -1){  //key doesn't exist
        return false;
        }
      else{ //key exist
       return true;
    }
    }

    public v remove(k key){
        int bi = hashFunction(key);
        int di = searchInLL(key, bi); // data index
    
      if(di == -1){  //key doesn't exist
        return null;
        }
      else{ //key exist
        Node node = bucket[bi].remove(di);
       return node.value;
    }
    }

    public ArrayList<k> keySet(){
        ArrayList<k> keys = new ArrayList<>();

        for(int i=0; i<bucket.length; i++){ //bi
            LinkedList<Node> ll = bucket[i];
            for(int j=0; j<ll.size(); j++){ //di
                Node node = ll.get(j);
                keys.add(node.key);
            }
        }
        return keys;
    }

    public boolean isEmpty(){
        return n == 0;
    }
  }
 
    public static void main(String[] args) {
    HashMap<String , Integer> map = new HashMap<>();
    map.put("India", 190);
    map.put("China", 200);
    map.put("US", 50);
 }   
}
