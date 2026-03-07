
public class TOH {
    public static void towerOfHanoi(int n, String Source, String Helper, String Dest){

        if(n == 1){
            System.out.println("transfer disk "+n+"from "+ Source+" to "+Dest);
             return;
        }
        towerOfHanoi(n-1, Source, Dest, Helper); //1st step (n-1) disk are transfer to helper from source
        System.out.println("transfer disk "+n+"from "+ Source+" to "+Dest); //it prints // it transfer source to destn disks
        towerOfHanoi(n-1, Helper, Dest, Source); // now (n-1) disks are transfer from helper to des
    }
public static void main(String[] args) {
   // int n = 1; // transfer disk 1 from S to D
     // int n = 2;
      /*
      output: 
      transfer disk 1from S to H
      transfer disk 2from S to D
      transfer disk 1from H to S
      */
     int n =3;
    towerOfHanoi(n, "S", "H", "D");
}    
}
